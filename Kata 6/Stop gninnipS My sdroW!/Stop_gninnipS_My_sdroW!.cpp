// Write a function that takes in a string of one or more words, and returns the same string, but with all five or more 
// letter words reversed (Just like the name of this Kata).
// 
// Strings passed in will consist of only letters and spaces.
// Spaces will be included only when more than one word is present.
//
// Examples:
//
// spinWords("Hey fellow warriors") = > returns "Hey wollef sroirraw"

#include <string>

std::string spinWords(const std::string& str)
{
    // Initial values for splitting string into separate words
    std::string token = {}, result = {};
    char delimiter = ' ';
    std::stringstream SPLS(str);

    // Splitting string into separate words (token) with spaces (delimiter) inbetween
    while (std::getline(SPLS, token, delimiter))
    {
        // Kata condition: only words with >5 letters should be reversed
        if (token.length() > 4)
        {
            // Word equals to string
            if (token == str)
            {
                std::reverse(token.begin(), token.end());
                return token;
            }
            std::reverse(token.begin(), token.end());
            result += token;
        }
        // Otherwise, simply concatenate word to the result
        else 
        {
            // Word equals to string
            if (token == str) { return token; }
            result += token;
        }
        result += " ";
    }
    // Deleting last space due to kata's resulting string look
    result.pop_back();

    return result;
}