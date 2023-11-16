#include "include/functions.h"
#include <iostream>
#include <cstdint>
#include <ios>
#include <vector>
#include <numeric>

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

int main() {
    /* int64_t num = 24;
    std::cout << "Is " << num << " the sum of two abundant numbers?: " << std::boolalpha << func::is_sum_of_two_abundant_numbers(num) << '\n'; */
    //Make vector of all integers from 1 up to and including 28123.
    /* std::vector<int64_t> number_vector(28123);
    std::iota(number_vector.begin(), number_vector.end(), 1); */
    //std::cout << func::sum_of_proper_divisors_of(13) << '\n';
    int64_t lower = 1;
    int64_t upper = 28123;
    std::cout << "The sum of all the positive integers which cannot be written as the sum of two abundant numbers is:" << '\n';
    std::cout << func::sum_of_ints_not_expressable_as_sum_of_two_abundant_ints(lower, upper) << '\n';

    return 0;
}