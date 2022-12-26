// In this kata you are given a string for example:
//
// "example(unwanted thing)example"
// 
// Your task is to remove everything inside the parentheses as well as the parentheses themselves.
//
// The example above would return :
//
// "exampleexample"
// 
//  Notes:
// 
//  Other than parentheses only letters and spaces can occur in the string.
//  Don't worry about other brackets like "[]" and "{}" as these will never appear.
//  There can be multiple parentheses.
//  The parentheses can be nested.

#include <string>

std::string remove_parentheses(const std::string& str)
{
    std::string modified_input = "";
    for (const char c : str)
    {
        // Iterating until first closing parentheses
        if (c != ')')
            modified_input.push_back(c);
        else
        {
            // Starting to remove characters between parentheses and parentheses themselves
            while (!modified_input.empty())
            {
                char last = modified_input.back(); // Current removable cha
                if (last != '(')
                    modified_input.pop_back();
                // If we have reached the starting parentheses, erase them and break out of one pair of parentheses
                else
                {
                    modified_input.pop_back();
                    break;
                }
            }
        }
    }
    return modified_input;
}