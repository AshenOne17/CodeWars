/*
* In this little assignment you are given a string of space separated numbers, and have to return 
  the highest and lowest number.

  Examples:

  highAndLow("1 2 3 4 5");  // return "5 1"
  highAndLow("1 2 -3 4 5"); // return "5 -3"
  highAndLow("1 9 3 4 -5"); // return "9 -5"

  Notes:

  All numbers are valid Int32, no need to validate them.
  There will always be at least one number in the input string.
  Output string must be two numbers separated by a single space, and highest number is first.
*/

#include <string>
#include <sstream>
#include <climits>

std::string highAndLow(const std::string& numbers) 
{
    int min = INT_MAX, max = INT_MIN, num;

    std::stringstream ss(numbers);

    std::string result = "";

    while (ss >> num) 
    {
        // Comparing smallest element with the current, and reassign, if needed
        min = std::min(min, num);

        // Comparing biggest element with the current, and reassign, if needed
        max = std::max(max, num);
    }

    result += std::to_string(max) + " " + std::to_string(min);

    return result;
}