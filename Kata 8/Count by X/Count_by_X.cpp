// Create a function with two arguments that will return an array of the first n multiples of x.
//
// Assume both the given numberand the number of times to count will be positive numbers greater than 0.
//
// Return the results as an array or list(depending on language).

#include <vector>

std::vector<int> countBy(int x, int n) {
	std::vector<int> result;
	int count{ 1 };
	while (count <= n) { 
		result.push_back(count * x); count++; 
	}
	return result;
}