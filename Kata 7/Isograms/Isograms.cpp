// An isogram is a word that has no repeating letters, consecutive or non - consecutive.
// Implement a function that determines whether a string that contains only letters is an isogram.
// Assume the empty string is an isogram.
// Ignore letter case.

#include <cctype>

bool is_isogram(std::string str) {
    if (str.length() < 2) return true;

    // using transform function with lambda to transfer string into lowercase
    std::transform(str.begin(), str.end(), str.begin(),
        [](unsigned char c) { return std::tolower(c); });

    // sorting to implement further character comparison algorithm
    std::sort(str.begin(), str.end());

    for (int i = 0; i < str.length(); ++i) {
        // if two consecutive characters are same, string is not an isogram
        if (str[i] == str[i + 1]) {
            return false;
        }
    }

    return true;
}