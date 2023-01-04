/*
 * The main idea is to count all the occurring characters in a string. 
   If you have a string like aba, then the result should be {'a': 2, 'b': 1}.

*  What if the string is empty? Then the result should be empty object literal, {}.
*/

#include <algorithm> // for std::for_each
#include <map>
#include <string>

std::map<char, unsigned> count(const std::string& string) {
    if (string.length() == 0)
        return {};

    std::map<char, unsigned> counter;

    // Not using 'const' to avoid additional level of indirection, using for_each for avoiding extra iterator creation on each iteration
    std::for_each(string.begin(), string.end(), [&counter](auto& letter) {
        counter[letter]++;
        });

    return counter;
}