// Complete the solution so that it reverses all of the words within the string passed in.
//
// Example(Input-- > Output):
//
// "The greatest victory is that which requires no battle" --> 
// "battle no requires which that is victory greatest The"

#include <string>
#include <sstream>

std::string reverse_words(const std::string& str) {
	auto strSS = std::istringstream(str);
	std::string reversedString = "", token = "";

	// While there are any words left to take
	while (strSS >> token) {
		if (!reversedString.empty()) // Spaces between the words
			reversedString.insert(0, " ");

		reversedString.insert(0, token); // Inserting word in the beginning of string with reversed order of words
	}

	return reversedString;
}