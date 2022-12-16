// Given an array of integers, find the one that appears an odd number of times.
//
// There will always be only one integer that appears an odd number of times.
//
// Examples:
// 
// [7] should return 7, because it occurs 1 time(which is odd).
// [0] should return 0, because it occurs 1 time(which is odd).

#include <vector>

int findOdd(const std::vector<int>& numbers) {
    std::vector<int> temp = numbers, occurs;

    // Counting number of occurs of each number
    for (int num : temp) {
        occurs.push_back(std::count(temp.begin(), temp.end(), num));
    }

    for (int i = 0; i < occurs.size(); i++) {
        // If the number of occurs is even, continue iterating through the vector of occurs
        if (occurs[i] % 2 == 0) {
            continue;
        }
        // Else, the occurs number is odd, return function
        else {
            return temp[i];
        }
    }

    return 0;
}