// You might know some pretty large perfect squares. 
// But what about the NEXT one ?
//
// Complete the findNextSquare method that finds the next integral perfect square after the one passed as a parameter.
// Recall that an integral perfect square is an integer n such that sqrt(n) is also an integer.
//
// If the parameter is itself not a perfect square then - 1 should be returned.
// You may assume the parameter is non - negative.
//
// Examples:(Input-- > Output)
//
// 121 -- > 144
// 625 -- > 676
// 114 -- > -1 since 114 is not a perfect square

// Solution #1

//#include <cmath>
//
//long int findNextSquare(long int sq) {
//    long number = sqrt(sq);
//    if (number * number != sq) return -1;
//
//    // if our next square is perfect
//    bool perfect = false;
//    number++;
//
//    while (!perfect) {
//        sq = pow(number, 2);
//        if (number * number == sq) {
//            perfect = true;
//        }
//        else {
//            number++;
//        }
//    }
//    return sq;
//}

// Solution #2

//#include <cmath>
//
//long int findNextSquare(long int sq) {
//    long number = sqrt(sq);
//    if (number * number != sq) return -1;
//    return ((number + 1) * (number + 1));
//}

// Solution #3

//#include <cmath>
//
//long int findNextSquare(long int sq) {
//    long number = sqrt(sq);
//    if (number * number != sq) return -1;
//    return pow(number + 1, 2);
//}