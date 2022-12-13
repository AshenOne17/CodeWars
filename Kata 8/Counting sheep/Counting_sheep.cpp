// Consider an array/list of sheep where some sheep may be missing from their place. 
// We need a function that counts the number of sheep present in the array (true means present).
// For example,
//
// [true, true, true, false,
// true, true, true, true,
// true, false, true, false,
// true, false, false, true,
// true, true, true, true,
// false, false, true, true]
// 
// The correct answer would be 17.

#include <vector>

using namespace std;

int count_sheep(const vector<bool>& arr) {
    // no need to check for null values since count won't basically count them
    int count{ 0 };
    // const because not modifying values/no ampersand because simple variable type (not user - defined)
    for (const bool element : arr) { if (element) count++; }
    return count;
}