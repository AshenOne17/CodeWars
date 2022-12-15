// Implement a function that accepts 3 integer values a, b, c.The function should return true if a triangle 
// can be built with the sides of given length and false in any other case.
//
// (In this case, all triangles must have surface greater than 0 to be accepted).

namespace Triangle {
    bool isTriangle(long a, long b, long c) {
        // The sum of the lengths of any two sides of triangle
        // should be greater than the length of the third side
        // - main condition
        if (a + b > c && a + c > b && b + c > a) {
            return true;
        }
        else {
            return false;
        }
    }
};