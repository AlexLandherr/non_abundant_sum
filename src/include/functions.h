#include <cstdint>

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

namespace func {
    int64_t sum_of_proper_divisors_of(int64_t number);
    bool is_abundant_number(int64_t number);
    bool is_sum_of_two_abundant_numbers(int64_t number);
    int64_t sum_of_ints_not_expressable_as_sum_of_two_abundant_ints(int64_t &lower_limit, int64_t &upper_limit);
}

#endif