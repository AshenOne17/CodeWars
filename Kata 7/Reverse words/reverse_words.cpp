/*
* Complete the function that accepts a string parameter, and reverses each word in the string. 
  All spaces in the string should be retained.

  Examples:

  "This is an example!" ==> "sihT si na !elpmaxe"
  "double  spaces"      ==> "elbuod  secaps"

*/

#include <string>
#include <algorithm>

std::string reverse_words(std::string str)
{
	// 'start' and 'end' variables for holding current word position    
    size_t start = 0, end = 0;

    // Splitting words
    while ((end = str.find(' ', start)) != std::string::npos) 
    {
        // Skipping leading spaces by putting 'start' at the first letter of the first word
        std::reverse(str.begin() + start, str.begin() + end);

        // Shifting 'start' to the first letter of the next word
        start = end + 1;
    }

    std::reverse(str.begin() + start, str.end());

    return str;
}