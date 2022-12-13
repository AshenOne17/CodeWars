// Create a function that takes an integer as an argument and returns "Even" for even numbers or "Odd" for odd numbers.

#include <string>

std::string even_or_odd(long long number) { return (number & 1 ? "Odd" : "Even"); }