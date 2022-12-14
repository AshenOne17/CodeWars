// Return the number (count) of vowels in the given string.
// We will consider a, e, i, o, u as vowels for this Kata(but not y).
// The input string will only consist of lower case lettersand /or spaces.

#include <string>

int getCount(const std::string& inputStr) {
    int num_vowels{ 0 };
    for (const char c : inputStr) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            num_vowels++;
        }
    }
    return num_vowels;
}