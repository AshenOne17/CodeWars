// You are given an array (which will have a length of at least 3, but could be very large) containing integers.
// The array is either entirely comprised of odd integers or entirely comprised of even integers except for a single integer N.
// Write a method that takes the array as an argumentand returns this "outlier" N.
//
// Examples:
// 
// [2, 4, 0, 100, 4, 11, 2602, 36]
// Should return: 11 (the only odd number)

#include <vector>

int FindOutlier(const std::vector<int>& arr)
{
    bool odd = false;

    // to determine whether array consists of all (except one) even or odd numbers,
    // it is enough to check first three elements (using only bitwise & operator),
    // since two numbers of same parity will form the parity of an array
    // (regarding the conditions of kata, there is only 1 alien element)

    // if arr[first] and arr[second] are odd, or
    if (arr[0] & 1 && arr[1] & 1) 
    {
        odd = true;
    }
    // if arr[second] and arr[third] are odd, or
    else if (arr[1] & 1 && arr[2] & 1) 
    {
        odd = true;
    }
    // if arr[first] and arr[third] are odd, all other elements are odd or even
    else if (arr[0] & 1 && arr[2] & 1) 
    {
        odd = true;
    }
    // if array consists of odd integers (except 1 even),
    if (odd) 
    {
        // iterate until the even number and return it.
        for (const int number : arr) {
            if (!(number & 1)) return number;
        }
    }
    // else, array consists of even integers (except 1 odd),
    else {

        // iterate until the odd number and return it.
        for (const int number : arr) {
            if (number & 1) return number;
        }
    }

    return -1;
}