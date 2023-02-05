/*
* Write a function to convert a name into initials. 
This kata strictly takes two words with one space in between them.

  The output should be two capital letters with a dot separating them.

  It should look like this:

  Sam Harris => S.H

  patrick feeney => P.F
*/

#include <string>
#include <sstream>

std::string abbrevName(const std::string& name)
{
    // Object to split string into first and last name
    std::istringstream ss(name);

    std::ostringstream result;

    std::string word;

    while (std::getline(ss, word, ' ')) 
    {
        // Adding first letter (initial) to the result in uppercase as well as a point
        result << static_cast<char>(toupper(word[0])) << '.';
    }

    std::string abbreviatedName = result.str();

    abbreviatedName.pop_back();

    return abbreviatedName;
}