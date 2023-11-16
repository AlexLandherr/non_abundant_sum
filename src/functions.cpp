#include "include/functions.h"
#include <cstdint>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

namespace func {
    int64_t sum_of_proper_divisors_of(int64_t number) {
        int64_t result = 0;

        if (number == 1 || number == 0) {
            return result;
        }
            
        result++;
        for (int i = 2; i <= std::sqrt(number); i++) {
            if (number % i == 0) {
                result += i;
                if (number / i != i) {
                    result += number / i;
                }
            }
        }

        //Return the sum of the proper divisors of number.
        return result;
    }

    bool is_abundant_number(int64_t number) {
        return sum_of_proper_divisors_of(number) > number;
    }

    bool is_sum_of_two_abundant_numbers(int64_t number) {
        for (int64_t i = 1; i <= (number / 2); i++) {
            if (is_abundant_number(i) && is_abundant_number(number - i)) {
                return true;
            }
        }
        return false;
    }

    int64_t sum_of_ints_not_expressable_as_sum_of_two_abundant_ints(int64_t &lower_limit, int64_t &upper_limit) {
        int64_t result_sum = 0;
        for (auto n = lower_limit; n <= upper_limit; n++) {
            if (!is_sum_of_two_abundant_numbers(n)) {
                result_sum += n;
            }
        }
        
        return result_sum;
        /* int64_t result_sum = 0;
        for (int64_t n : numbers_vector) {
            if (!is_sum_of_two_abundant_numbers(n)) {
                result_sum += n;
            }
        }

        return result_sum; */
        /* for (int64_t n : numbers_vector) {
            if (is_sum_of_two_abundant_numbers(n)) {
                numbers_vector.erase(std::find(numbers_vector.begin(), numbers_vector.end(), n));
            }
        }

        return std::accumulate(numbers_vector.begin(), numbers_vector.end(), 0); */
    }
}