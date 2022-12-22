// Complete the solution so that it splits the string into pairs of two characters.
// If the string contains an odd number of characters then it should replace the missing second character of the final pair with an underscore('_').
//
// Examples:
//
// * 'abc' = > ['ab', 'c_']
// * 'abcdef' = > ['ab', 'cd', 'ef']

#include <string>
#include <vector>

std::vector<std::string> solution(const std::string& s) {
    std::vector<std::string> words; // Vector to store pairs of two characters

    std::string::size_type len = s.length();

    for (int i = 0; i < len; i += 2) 
        words.push_back(s.substr(i, 2));
    
    if (len & 1) words.back().push_back('_'); // If number of letters of input string is odd, append '_' symbol (due to kata conditions)

    return words;
}