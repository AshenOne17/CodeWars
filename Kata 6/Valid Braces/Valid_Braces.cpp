/*
Write a function that takes a string of braces, and determines if the order of the braces is valid. 
It should return true if the string is valid, and false if it's invalid.

This Kata is similar to the Valid Parentheses Kata, but introduces new characters: brackets [], and curly braces {}. 
Thanks to @arnedag for the idea!

All input strings will be nonempty, and will only consist of parentheses, brackets and curly braces: ()[]{}.

What is considered Valid?
A string of braces is considered valid if all braces are matched with the correct brace.

Examples
"(){}[]"   =>  True
"([{}])"   =>  True
"(}"       =>  False
"[(])"     =>  False
"[({})](]" =>  False
*/

#include <string>
#include <stack>

bool valid_braces(const std::string& braces)
{
    // Stack to store entering braces (starting from the beginning of input), FILO type
    std::stack<char> braceStack;

    for (char c : braces) 
    {
        // If we encountered an opening brace, push it into the queue of braces
        if (c == '(' || c == '[' || c == '{') 
        {
            braceStack.push(c);
        }
        // Else, it must be a closing brace
        else 
        {
            // If we have no current opened braces, it means that we have no pair of braces, so we return false
            if (braceStack.empty()) 
                return false;
            
            // Picking most internal opening brace (current on the top of stack) as a current opening brace
            char top = braceStack.top();

            // If the current opening brace does not correspond to its other half, we have uncorrect pair of braces, return false
            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) 
                return false;
            
            // Else, we eliminate most internal opening brace
            // (and iterate over the next brace, eliminating current closing brace, and eliminating pair by definition)
            braceStack.pop();
        }
    }

    // If we have no opening braces left, and we have iterated over all of the braces in a string, we have encountered all correct pairs
    return braceStack.empty();
}