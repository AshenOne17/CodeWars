/*
* Given an array of integers, return a new array with each value doubled.

  For example:

  [1, 2, 3] --> [2, 4, 6]
*/

#include <vector>

std::vector<int> maps(const std::vector<int>& values) // Complexity: O(n) - linear
{
    std::vector<int> temp;

    // Reserving extra space using the number of input vector elements (since its the same) to avoid extra memory allocations on each iteration
    temp.reserve(values.size());

    for (auto& element : values)
    {
        temp.push_back(element * 2);
    }

    return temp;
}