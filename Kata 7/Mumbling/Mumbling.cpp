// This time no story, no theory.The examples below show you how to write function accum :
//
// Examples:
// accum("abcd") -> "A-Bb-Ccc-Dddd"
// accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
// accum("cwAt") -> "C-Ww-Aaa-Tttt"
// 
// The parameter of accum is a string which includes only letters from a..z and A..Z.

#include <cctype>
#include <string>

class Accumul {
public:
    static std::string accum(const std::string& s) {
        // Final mumbling string
        std::string result = {};

        // Adding first mumbling letter
        result += std::toupper(s[0]);

        if (s.length() == 1) {
            return result;
        }
        else {
            // Number of mumbling letters
            int count = 1;

            // First iteration to avoid first letter mumbling
            bool firstIteration = true;

            for (const char ch : s) {
                // First iteration to avoid first letter mumbling
                if (firstIteration) {
                    firstIteration = false;
                    continue;
                }

                // Hyphen between mumbled words
                result += '-';

                // If letter is uppercase, do not double it
                if (std::isupper(ch)) {
                    result += ch;
                    result.append(count, std::tolower(ch));
                }
                // Else, make first letter of mumbling word uppercase
                else {
                    result += std::toupper(ch);
                    result.append(count, ch);
                }

                // Increase the number of mumbled letters
                count++;
            }
            return result;
        }

    }
};