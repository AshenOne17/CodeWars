/*
*Create a function that takes a Roman numeral as its argument and returns its value as a numeric decimal integer. 
 You don't need to validate the form of the Roman numeral.

 Modern Roman numerals are written by expressing each decimal digit of the number to be encoded separately, 
 starting with the leftmost digit and skipping any 0s. 
 So 1990 is rendered "MCMXC" (1000 = M, 900 = CM, 90 = XC) and 2008 is rendered "MMVIII" (2000 = MM, 8 = VIII). 
 The Roman numeral for 1666, "MDCLXVI", uses each letter in descending order.

 Example:

 solution("XXI"); // => 21
 Help:

 Symbol    Value
 I          1
 V          5
 X          10
 L          50
 C          100
 D          500
 M          1,000
*/

#include <iostream>
#include <string>

using namespace std;

int solution(std::string s) 
{
    // Storing each roman symbol with its arabic number analog
    std::unordered_map<char, int> values = { {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };

    int sum = 0;

    for (int i = 0; i < s.length(); i++) 
    {
        // If current roman symbol is higher than previous, we substract it (like 'IV', 'IX', etc.)
        if (i > 0 && values[s[i]] > values[s[i - 1]]) 
        {
            // The value of the current symbol is added to the result first, then it subtracts twice the value of the previous symbol 
            // to account for the fact that it was added earlier.
            result += values[s[i]] - 2 * values[s[i - 1]];
        }
        else 
        {
            result += values[s[i]];
        }
    }

    return result;
}