// Build a function that returns an array of integers from n to 1 where n>0.
//
// Example: n = 5 -- > [5, 4, 3, 2, 1]

#include<vector>

std::vector<int> reverseSeq(int n) {
    std::vector<int> result;
    while (n > 0) {
        result.push_back(n);
        n--;
    }
    return result;
}