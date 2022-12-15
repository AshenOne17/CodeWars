// You are going to be given a word. Your job is to return the middle character of the word. 
// If the word's length is odd, return the middle character. 
// If the word's length is even, return the middle 2 characters.

#include <string>

std::string get_middle(std::string input) {
    std::string result = {};

    // Even length of the word
    if ((input.size() & 1) != 0) {
        result += input.substr(input.size() / 2, 1);
    }
    // Odd length of the word
    else {
        result += input.substr((input.size() / 2) - 1, 2);
    }
    return result;
}