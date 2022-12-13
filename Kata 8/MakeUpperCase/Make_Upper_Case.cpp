// Write a function which converts the input string to uppercase.

#include <string>
#include <cctype>

// implementing a toupper function, making each character uppercase
std::string toupper(std::string& input_string) {
    // iterating though each character of string
    std::transform(input_string.begin(), input_string.end(), input_string.begin(),
        // lambda for uppercasing each letter
        [](unsigned char c) { return std::toupper(c); });
    return input_string;
}

std::string makeUpperCase(const std::string& input_str) {
    std::string temp = input_str;
    return (toupper(temp));
}