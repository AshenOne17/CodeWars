// Complete the method / function so that it converts dash / underscore delimited words into camel casing.
// The first word within the output should be capitalized only if the original word was capitalized
// (known as Upper Camel Case, also often referred to as Pascal case).
// The next words should be always capitalized.
//
// Examples:
// "the-stealth-warrior" gets converted to "theStealthWarrior"
// "The_Stealth_Warrior" gets converted to "TheStealthWarrior"

#include <string>

std::string to_camel_case(const std::string& input) {
    std::string output;
    bool capitalizeNext = false;

    for (char c : input) 
    {
        if (c == '-' || c == '_') 
        {
            capitalizeNext = true;
            continue;
        }

        if (capitalizeNext) 
        {
            output += static_cast<char>(toupper(c));
            capitalizeNext = false;
        }
        else 
        {
            output += c;
        }
    }

    return output;
}