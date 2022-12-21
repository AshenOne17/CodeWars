// Welcome.
//
// In this kata you are required to, given a string, replace every letter with its position in the alphabet.
//
// If anything in the text isn't a letter, ignore it and don't return it.
//
// "a" = 1, "b" = 2, etc.
//
// Example:
// 
// alphabet_position("The sunset sets at twelve o' clock.")
// 
// Should return "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11" (as a string)

#include <string>

std::string alphabet_position(const std::string& text) {
    std::string alphabet = " ";

    for (char i : text) {
        // If anything is not a letter, skip it
        if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z')) {
            alphabet += std::to_string(i & 31) + ' ';
        }
    }
     
    // Deleting last space symbol
    if (alphabet.back() == ' ') 
        alphabet.pop_back();

    return alphabet;
}