// Write a function, persistence, that takes in a positive parameter numand returns its multiplicative persistence, 
// which is the number of times you must multiply the digits in num until you reach a single digit.
//
// For example(Input-- > Output):
//
// 39 -- > 3 (because 3 * 9 = 27, 2 * 7 = 14, 1 * 4 = 4 and 4 has only one digit)
// 999 -- > 4 (because 9 * 9 * 9 = 729, 7 * 2 * 9 = 126, 1 * 2 * 6 = 12, and finally 1 * 2 = 2)
// 4 -- > 0 (because 4 is already a one - digit number)

int persistence(long long n) {
    // 'number' - number that we get after multiplying the digits,
    // 'copy' - copy of input number to avoid its changing,
    // 'op' - number of times to multiply the digits in number.
    int number = 1, copy = n, op = 0;

    // 'copy' should be more than 9 in order to have digits to multiply
    while (copy > 9) {
        // Splitting current number ('copy') into digits and multiplying them
        while (copy > 0) {             
            int digit = copy % 10;
            number *= digit;
            copy /= 10;
        }
        copy = number; // Changing current number to the multiplied one
        number = 1;    // Reinitializing digits multiplicator
        op++;
    }

    return op;
}