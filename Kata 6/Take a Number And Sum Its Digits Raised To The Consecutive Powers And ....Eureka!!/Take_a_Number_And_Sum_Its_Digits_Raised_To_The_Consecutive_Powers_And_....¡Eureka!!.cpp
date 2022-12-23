// The number 89 is the first integer with more than one digit that fulfills the property partially introduced in the title of this kata.
// What's the use of saying "Eureka"? Because this sum gives the same number: 89 = 8^1 + 9^2
//
// The next number in having this property is 135:
//
// See this property again : 135 = 1^1 + 3^2 + 5^3
//
//
// Task:
// -----
// We need a function to collect these numbers, that may receive two integers aaa, bbb that defines the range[a, b][a, b][a, b](inclusive) 
// and outputs a list of the sorted numbers in the range that fulfills the property described above.
//
// Examples:
// ---------
// Let's see some cases (input -> output):
//
// 1, 10  -- > [1, 2, 3, 4, 5, 6, 7, 8, 9]
// 1, 100 -- > [1, 2, 3, 4, 5, 6, 7, 8, 9, 89]
// 
// If there are no numbers of this kind in the range[a, b][a, b][a, b] the function should output an empty list.
//
// 90, 100 -- > []

#include <vector>
#include <stack>
#include <cmath>

std::vector<unsigned int> sumDigPow(unsigned int a, unsigned int b)
{
	std::vector<unsigned int> eurekaNumbers = {}; // std::vector storing values that correspond to kata conditions

	for (unsigned int i = a; i <= b; i++) // [a(i), b] range
	{
		unsigned int temp = 0, digit = 0; // creating 'temp' variable because i is loop iterator, that can't be used in calculations 

		std::stack<int> sd; // std::stack for storing digits (very convenient due to FILO type)
		temp = i;			// FILO - First In, Last Out (reversing digits order)			

		while (temp > 0) // Splitting number into digits
		{
			digit = temp % 10;
			temp /= 10;
			// Example: 135
			// Pushing digits for further calculations into the stack like that: 5 -> 3 -> 1
			sd.push(digit);
		}

		digit = 0; // Resetting 'digit' variable being used in next calculation loop

		// 'digitsSum' - sum of digits, raised to consecutive powers, 'powerCount' - current power number
		unsigned int digitsSum = 0, powerCount = 1;

		while (!sd.empty())
		{
			// Taking topmost digit (1, because stack is FILO, making kind of tower)
			digit = sd.top();
			digitsSum += round((pow(digit, powerCount) + 1e-9)); // Counting its sum
			++powerCount;
			sd.pop(); // Removing that topmost digit
		}

		if (digitsSum == i)
			eurekaNumbers.push_back(i);

		// Resetting value prior to next loop iteration
		digitsSum = 0;
		powerCount = 1;
		digit = 0;
	}

	return eurekaNumbers;
}