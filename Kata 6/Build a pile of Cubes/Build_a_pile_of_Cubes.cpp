// Your task is to construct a building which will be a pile of n cubes.
// 
// The cube at the bottom will have a volume of n^3, the cube above will have volume of (n − 1)^3, 
// and so on until the top which will have a volume of 1^3.
//
// You are given the total volume m of the building. Being given m can you find the number n of cubes you will have to build?
//
// The parameter of the function findNb(find_nb, find - nb, findNb, ...) will be an integer m and you have to return the integer n 
// such as n^3 + (n − 1)^3 + (n − 2)^3 + ... + 1^3 = m if such a n exists or -1 if there is no such n.
//
// Examples:
// 
// findNb(1071225)-- > 45
// findNb(91716553919377)-- > -1

/* Author remark
 * 
 To be honest, it was one of the hardest kata 6 yet (22.12.2022). To come up with the solution,
 I had to spend some days just thinking about it, then looking through different mathematical theorems,
 and after playing with code. Only then I realised, the solution was neither really that hard to think of nor to implement it.
 It was pretty obvious and easy to implement, only meaning that not all non - trivial number algorithms are hard.
*
*/

class ASum {
public:
    static long long findNb(long long m);
};

long long ASum::findNb(long long m) {
    // 'count' - our starting 1 value, corresponding to 1^3 in the kata conditions, increasing with each iteration;
    // 'sum' - number, rising cubically reliantly on 'count' with each iteration 
    long long count = 1, sum = 0;

    // We should not leap the input 'm' number, or else there will be none 'count' that will form cubic form of 'm'
    while (sum <= m) {
        sum += count * count * count; // Counting 'sum' to compare it with input
        if (sum == m) 
            return count;
        count++;
    }

    return -1;
}