// It's pretty straightforward. Your goal is to create a function that removes the first and last characters of a string. 
// You're given one parameter, the original string. You don't have to worry with strings with less than two characters.

#include <string>

std::string sliceString(const std::string& str) {
    // returning substring of input string excluding 2nd character and last one 
    // (since the count starts at 0 and ends at -1)
    return (str.substr(1, str.length() - 2));
}