// Create a function that gives a personalized greeting. This function takes two parameters: name and owner.

#include <string>

std::string greet(const std::string& name, const std::string& owner) {
    std::string greeting;
    name == owner ? greeting += "Hello boss" : greeting += "Hello guest";
    return greeting;
}