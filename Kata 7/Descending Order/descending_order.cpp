/*
* Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in descending order. Essentially, rearrange the digits to create the highest possible number.

  Examples:

  Input: 42145 Output: 54421

  Input: 145263 Output: 654321

  Input: 123456789 Output: 987654321
*/

#include <cinttypes>
#include <string>
#include <algorithm>
#include <vector>

uint64_t descendingOrder(uint64_t a)
{
    // Vector to store the digits of the input number
    std::vector<int> digits;

    // Pushing digits in the vector in the reversed order (not specifically obligatory)
    while (a > 0) {
        digits.push_back(a % 10);
        a /= 10;
    }

    // Sorting vector using reversed iterators to get digits in the descending order
    std::sort(digits.rbegin(), digits.rend());

    uint64_t result = 0;
    uint64_t multiplier = 1;

    for (int num : digits) 
    {
        result += num * multiplier; // Add the current digit to the number
        multiplier *= 10; // Increase the digit of the number
    }

    return result;
}