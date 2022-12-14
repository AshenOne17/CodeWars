// Welcome. In this kata, you are asked to square every digit of a number and concatenate them.
//
// For example, if we run 9119 through the function, 811181 will come out, because 92 is 81 and 12 is 1.
//
// Note: The function accepts an integer and returns an integer

#include <string>
#include <cmath>

int square_digits(int num) {
    // creating temporary string to iterate through each number and result string
    std::string temp = std::to_string(num), result;

    for (char i : temp) {
        // square every digit 
        int square = pow(i - '0', 2);

        // concatenate with result string
        result += std::to_string(square);
    }

    return std::stoi(result);
}