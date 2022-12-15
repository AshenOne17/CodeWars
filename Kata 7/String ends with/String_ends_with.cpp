// Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument(also a string).

#include <string>

bool solution(std::string const& str, std::string const& ending) {
    // If string is longer that comparable string ending
    if (str.length() >= ending.length()) {
        return (0 == str.compare(str.length() - ending.length(), ending.length(), ending));
    }
    // Else return false, since ending can not be longer than the main string
    else {
        return false;
    }
}