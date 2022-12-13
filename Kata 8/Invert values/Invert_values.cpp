// Given a set of numbers, return the additive inverse of each. Each positive becomes negatives, and the negatives become positives.

#include <vector>

std::vector<int> invert(const std::vector<int>& values) {
    std::vector<int> temp;
    for (int element : values) {
        temp.push_back(-element);
    }
    return temp;
}