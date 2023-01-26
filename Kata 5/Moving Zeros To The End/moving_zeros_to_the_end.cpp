/*
* Write an algorithm that takes an array and moves all of the zeros to the end, preserving the order of the other elements.

  Example:
  move_zeros({1, 0, 1, 2, 0, 1, 3}) // returns {1, 1, 2, 1, 3, 0, 0}
*/

#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input)
{
    if (input.empty())
        return {};

    std::vector<int> result(input);

    // Keeping track of the last non-zero element in the vector
    int lastNonZero = 0;

    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] != 0)
        {
            // Swapping the current element with the last non-zero element
            result[lastNonZero++] = result[i];
        }
    }

    for (int i = lastNonZero; i < result.size(); i++)
        // Filling the remaining space of the vector with zeroes
        result[i] = 0;

    return result;
}