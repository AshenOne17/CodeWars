// Write a function to split a string and convert it into an array of words.

#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> string_to_array(const std::string& s) {
    // vector to store separated values
    std::vector<std::string> result;

    // stringstream for better string handling
    std::stringstream ss(s);

    // delimited value
    std::string item;

    while (std::getline(ss, item, ' ')) {
        result.push_back(item);
    }

    // special case for empty string
    if (s.empty()) result.emplace_back("");

    return result;
}