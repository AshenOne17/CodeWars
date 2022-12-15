// Create a function that returns the sum of the two lowest positive numbers given an array of minimum 4 positive integers.
// No floats or non - positive integers will be passed.
//
// For example, when an array is passed like[19, 5, 42, 2, 77], the output should be 7.

#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers) {
    uint32_t firstSmallest = 0xffffffff, secondSmallest = 0xffffffff;

    for (const int number : numbers) {
        if (firstSmallest > number) {
            secondSmallest = firstSmallest;
            firstSmallest = number;
        }
        else if (secondSmallest > number) {
            secondSmallest = number;
        }
    }
    return firstSmallest + secondSmallest;
}