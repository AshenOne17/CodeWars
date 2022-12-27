// The goal of this exercise is to convert a string to a new string where each character in the new string is "(" 
// if that character appears only once in the original string, or ")" if that character appears more than once in the original string.
// Ignore capitalization when determining if a character is a duplicate.
//
// Examples:
// 
// "din" = > "((("
// "recede" = > "()()()"
// "Success" = > ")())())"

#include <string>
#include <unordered_map>

std::string duplicate_encoder(const std::string& word) {
    // Hash map to store each character of string and times it occurs
    std::unordered_map<char, int> letters_count;

    // Iterate over the characters in the string to add them to our hash map and times they occur
    for (const unsigned char& ch : word) 
        letters_count[std::tolower(ch)]++;
    
    std::string result = "";

    // Iterate over the characters in the string again and append a '(' or a ')' to the result string based on the count of each character
    for (const unsigned char& c : word) 
        result.push_back((letters_count[std::tolower(c)] > 1 ? ")" : "("));
    
    return result;
}