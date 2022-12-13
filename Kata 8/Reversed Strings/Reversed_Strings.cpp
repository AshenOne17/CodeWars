// Complete the solution so that it reverses the string passed into it.

#include <string>

std::string reverseString(const std::string& str) {
    // checking for an empty string
    if (str.empty()) return "";
    // returning reversed string by passing reverse iterators to return constructor
    return (std::string(str.rbegin(), str.rend()));
}