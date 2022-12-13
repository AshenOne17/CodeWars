// Given a random non - negative number, you have to return the digits of this number within an array in reverse order.

#include <vector>

std::vector<int> digitize(unsigned long n) {
    std::vector<int> result;
    if (n == 0) result.push_back(0);
    while (n > 0) {
        result.push_back(n % 10);
        n /= 10;
    }
    return result;
}