// Make a function that will return a greeting statement that uses an input; 
// your program should return, "Hello, <name> how are you doing today?".

#include <string>

std::string greet(const std::string& n) {
	std::string greeting = "Hello,  how are you doing today?";
	greeting.insert(7, n);
	return greeting;
}