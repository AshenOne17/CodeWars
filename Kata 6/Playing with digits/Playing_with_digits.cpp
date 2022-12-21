// Some numbers have funny properties. For example:
//
// 89 -- > 8¹ + 9² = 89 * 1
//
// 695 -- > 6² + 9³ + 5⁴ = 1390 = 695 * 2
//
// 46288 -- > 4³ + 6⁴ + 2⁵ + 8⁶ + 8⁷ = 2360688 = 46288 * 51
//
// Given a positive integer n written as abcd... (a, b, c, d... being digits) and a positive integer p
// we want to find a positive integer k, if it exists, such that the sum of the digits of n taken to the successive powers of p is equal to k * n.
// 
// In other words:
//
// Is there an integer k such as : (a ^ p + b ^ (p + 1) + c ^ (p + 2) + d ^ (p + 3) + ...) = n * k
//
// If it is the case we will return k, if not return -1.
//
// Note: n and p will always be given as strictly positive integers.
//
// digPow(92, 1) should return -1 since there is no k such as 9¹ + 2² equals 92 * k
// digPow(695, 2) should return 2 since 6² + 9³ + 5⁴ = 1390 = 695 * 2
// digPow(46288, 3) should return 51 since 4³ + 6⁴ + 2⁵ + 8⁶ + 8⁷ = 2360688 = 46288 * 51

#include <cmath>
#include <vector>

class DigPow {
public:
    // Extra function for calculating integer (or any other T type> power
    template<typename T>
    static inline constexpr T pow(const T base, unsigned const exponent) {
        return (exponent == 0) ? 1 : (base * pow(base, exponent - 1));
    }

    static int digPow(int n, int p) {
        // Extra variable for latest calculations
        int number = n;

        std::vector<int> digits{};

        // Adding digits to an array in reversed order
        while (n > 0) {
            // (digit variable is optional, added for readability)
            int digit = n % 10;
            digits.push_back(digit);
            n /= 10;
        }

        // Reversing array to return to staring number in form of array
        std::reverse(digits.begin(), digits.end());

        // Sum which we will check, loop iterator as starting p power
        int sum = 0, i = p;

        size_t pos = 0;

        for (; pos < digits.size(); ++i, ++pos)
            sum += pow(digits[pos], i);
        
        // If there is no remainder in division
        // (exists variable is optional, added for readability)
        bool exists = ((sum % number) == 0);

        // Checking sum
        if (exists) {
            // Return k number
            return sum / number;
        }
        else {
            return -1;
        }
    }
};