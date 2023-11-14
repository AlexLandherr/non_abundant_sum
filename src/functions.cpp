#include "include/functions.h"
#include <cstdint>

/*
A perfect number is a number for which the sum of its proper divisors is exactly equal to the number. For example,
the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.

A number n is called deficient if the sum of its proper divisors is less than n and it is called abundant if this sum exceeds n.

As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest number that can be written as the sum of two
abundant numbers is 24. By mathematical analysis, it can be shown that all integers greater than 28123 can be written as the
sum of two abundant numbers. However, this upper limit cannot be reduced any further by analysis even though it is known that
the greatest number that cannot be expressed as the sum of two abundant numbers is less than this limit.

Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers.
*/

namespace func {
    int64_t sum_of_proper_divisors_of(int64_t number) {
        int64_t result = 0;

        if (number == 1 || number == 0) {
            return result;
        }
            
        result++;
        for (int i = 2; i <= (number / 2); i++) {
            if (number % i == 0) {
                if (number / i == i) {
                    result += i;
                } else {
                    result += (number / i);
                }
            }
        }

        //Return the sum of the proper divisors of number.
        return result;
    }

    bool is_abundant_number(int64_t number) {
        return sum_of_proper_divisors_of(number) > number;
    }
}