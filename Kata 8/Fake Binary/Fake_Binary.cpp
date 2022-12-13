// Given a string of digits, you should replace any digit below 5 with '0' and any digit 5 and above with '1'. Return the resulting string.

// Note: input will never be an empty string

#include <string>

std::string fakeBin(std::string str) {

    for (auto& ch : str) {
        // if number is higher than five, transform into 0, else into 1 (parentheses for clearance)
        ((ch - '0') < 5) ? ch = '0' : ch = '1';
    }
    return str;
}