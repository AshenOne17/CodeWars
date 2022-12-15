// Take 2 strings s1 and s2 including only letters from a to z.Return a new sorted string, the longest possible, 
// containing distinct letters - each taken only once - coming from s1 or s2.
//
// Examples:
// a = "xyaabbbccccdefww"
// b = "xxxxyyyyabklmopq"
// longest(a, b) -> "abcdefklmopqwxy"

#include <string>
#include <algorithm>

class TwoToOne {
public:
    static std::string longest(const std::string& s1, const std::string& s2) {
        std::string temp = s1 + s2, result = {};
        std::sort(temp.begin(), temp.end());
        for (unsigned long i = 0; i < temp.length(); i++) {
            result.push_back(temp[i]);
            while (temp[i] == temp[i + 1]) {
                i++;
            }
        }
        return result;
    }
};