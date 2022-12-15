// Implement a function that adds two numbers togetherand returns their sum in binary.
// The conversion can be done before, or after the addition.
//
// The binary number returned should be a string.
//
// Examples: (Input1, Input2-- > Output(explanation)))
//
// 1, 1 -- > "10" (1 + 1 = 2 in decimal or 10 in binary)

#include <cstdint>
#include <string>

std::string add_binary(uint64_t a, uint64_t b) {
    if (a == 0 && b == 0) return "0";

    // Adding input numbers first, to convert it further into binary string number
    uint64_t result = a + b;

    // String to save converted to binary number
    std::string resBinary;

    // Convertion into binary number
    while (result > 0) {
        uint64_t bit = result % 2;
        resBinary.insert(0, std::to_string(bit));
        result /= 2;
    }
    return resBinary;
}