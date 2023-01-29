/*
* Move the first letter of each word to the end of it, then add "ay" to the end of the word. 
  Leave punctuation marks untouched.

  Examples:

  pigIt('Pig latin is cool'); // igPay atinlay siay oolcay
  pigIt('Hello world !');     // elloHay orldway !
*/

#include <string>
#inclide <sstream>

std::string pig_it(std::string str)
{
    if (str.empty()) return "";

    // Object for splitting input string into 'word's
    std::istringstream iss(str);

    // Object for output, formed by concatenating each word with reversed 1st letter, added 'by' and space
    std::ostringstream oss;

    std::string word;

    while (iss >> word)
    {
        // Check if the first letter is alphabetic
        if (std::isalpha(word[0]))
        {
            // Shifting first letter of the word to the end
            std::rotate(word.begin(), word.begin() + 1, word.end());
            word += "ay";
        }
        oss << word << " ";
    }

    // Transforming std::ostringstream object into std::string using .str() method for output
    std::string result = oss.str();

    // Removing last space
    result.pop_back(); 

    return result;
}