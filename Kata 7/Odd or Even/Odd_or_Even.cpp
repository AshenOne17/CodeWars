// Given a list of integers, determine whether the sum of its elements is odd or even.
//
// Give your answer as a string matching "odd" or "even".
//
// If the input array is empty consider it as : [0] (array with a zero).

#include <string>
#include <vector>

std::string odd_or_even(const std::vector<int>& arr) {
    if (arr.empty()) return "even";

    int sum = 0;

    for (const int num : arr) {
        sum += num;
    }

    if (sum % 2 == 0) { 
        return "even"; 
    }
    else {
        return "odd";
    }
}