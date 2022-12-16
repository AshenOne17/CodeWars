// Digital root is the recursive sum of all the digits in a number.
//
// Given n, take the sum of the digits of n.If that value has more than one digit, 
// continue reducing in this way until a single - digit number is produced.
// The input will be a non - negative integer.
//
// Examples:
// 
// 16  -- > 1 + 6 = 7
// 942  -- > 9 + 4 + 2 = 15  -- > 1 + 5 = 6

// Math Definition for easier solution:
// The DIGITAL ROOT of a number is the remainder obtained when a number is divided by 9.
// 
// The idea is based on the fact that for a non-zero number, the digital root is 9 if the number is divisible by 9, 
// else the digital root is (sum of digits of num) % 9 (remainder of number, divided by 9).

int digital_root(int n) {
    if (n == 0)
        return 0;
    if (n % 9 == 0)
        return 9;
    else
        return n % 9;
}