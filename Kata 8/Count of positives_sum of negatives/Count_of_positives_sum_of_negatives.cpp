// Given an array of integers.
//
// Return an array, where the first element is the count of positives numbersand the second element is sum of negative numbers.
// 0 is neither positive nor negative.
//
// If the input is an empty array or is null, return an empty array.

#include <vector>

std::vector<int> countPositivesSumNegatives(const std::vector<int>& input) {
    std::vector<int> result = {};
    // checking for null array, and if true, return null array also
    if (input.size() <= 0) return result;

    int count{ 0 }, negativeSum{ 0 };

    for (const int element : input) {
        // if an element is positive, add the count, else, add the sum
        element > 0 ? count++ : negativeSum += element;
    }

    result.push_back(count);
    result.push_back(negativeSum);

    return result;
}