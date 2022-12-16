// Write a function that accepts an array of 10 integers(between 0 and 9), that returns a string of those numbers in the form of a phone number.
//
// Example:
// 
// createPhoneNumber(int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}) // => returns "(123) 456-7890"
// 
// The returned format must be correct in order to complete this challenge.
//
// Don't forget the space after the closing parentheses!

#include <string>

// O(n)
// additional function for convertion a range of number into a string
std::string numToStr(const int* start, const int* end) {
    std::string result = {};
    while (start <= end) {
        result += std::to_string(*start);
        start++;
    }
    return result;
}

// main kata function
std::string createPhoneNumber(const int arr[10]) {
    return '(' + numToStr(arr, arr + 2) + ") " + numToStr(arr + 3, arr + 5) + '-' + numToStr(arr + 6, arr + 9);
}
