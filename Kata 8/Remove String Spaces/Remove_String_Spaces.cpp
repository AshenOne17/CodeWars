// Simple, remove the spaces from the string, then return the resultant string.

#include <string>

std::string no_space(const std::string& x) {
    std::string temp{ x };
    temp.erase(std::remove(temp.begin(), temp.end(), ' '), temp.end());
    return temp;
}