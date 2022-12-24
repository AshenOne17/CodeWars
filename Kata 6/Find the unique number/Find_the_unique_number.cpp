// There is an array with some numbers. All numbers are equal except for one. Try to find it!
//
// Examples:
// find_uniq(std::vector<float>{1, 1, 1, 2, 1, 1}) --> 2
// find_uniq(std::vector<float>{0, 0, 0.55, 0, 0}) --> 0.55
// 
// It’s guaranteed that array contains at least 3 numbers.
//
// The tests contain some very huge arrays, so think about performance.

#include <vector>

float find_uniq(const std::vector<float>& v)
{
	bool firstIteration = false;

	if (v[0] != v[1] && v[1] == v[2]) // If unique element is the first one, and only the first one (since second is equal to third, 
		firstIteration = true;		  // as kata condition says: "all elements are equal except for one")

	for (std::vector<float>::size_type i = 0; i < v.size(); i++)
	{
		for (std::vector<float>::size_type j = i + 1; j < v.size(); j++)
		{
			if (firstIteration) // Simply return unique element with 1st position
				return v[0];

			if (v[i] != v[j])  // Else compare current element to next, and if the next is unique, return it
				return v[j];
		}
	}

	return -1;
}

