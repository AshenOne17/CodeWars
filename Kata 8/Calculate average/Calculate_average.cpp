// Write a function which calculates the average of the numbers in a given list.
//
// Note: Empty arrays should return 0.

#include <vector>

double calcAverage(const std::vector<int>& values) {
	double sum{ 0 };
	for (const int element : values) { 
		sum += element; 
	}
	return sum / values.size();
}