// I'm new to coding and now I want to get the sum of two arrays... Actually the sum of all their elements. I'll appreciate for your help.
//
// P.S.Each array includes only integer numbers.Output is a number too.

#include <vector>

int arrayPlusArray(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.empty() && b.empty()) return 0;
    int totalSum{ 0 };
    for (int aNumber : a) totalSum += aNumber;
    for (int bNumber : b) totalSum += bNumber;
    return totalSum;
}