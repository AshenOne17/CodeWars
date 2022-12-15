// Simple, given a string of words, return the length of the shortest word(s).
//
// String will never be empty and you do not need to account for different data types.

#include <string>

int find_short(std::string str) {
    std::string delimiter = " ";
    size_t pos = 0;
    std::string word;
    std::vector<std::string> words;

    while ((pos = str.find(delimiter)) != std::string::npos) {
        // splitting string into words (making temporary token)
        word = str.substr(0, pos);

        // adding them to the vector for further comparison
        words.push_back(word);

        // deleting them from initial string
        str.erase(0, pos + delimiter.length());
    }

    // additionally, adding last word from string because it 
    // doesn't add automatically in loop due to restrictions
    words.push_back(str);

    std::string shortest = words[0];
    for (const std::string& element : words) {
        if (shortest.length() > element.length()) shortest = element;
    }

    return shortest.length();
}