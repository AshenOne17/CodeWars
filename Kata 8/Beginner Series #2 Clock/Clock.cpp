// Clock shows h hours, m minutes and s seconds after midnight.
//
// Your task is to write a function which returns the time since midnight in milliseconds.
//
// Input constraints :
//
// 0 <= h <= 23
// 0 <= m <= 59
// 0 <= s <= 59

#include <cassert>

int past(int h, int m, int s) {
    assert("Wrong input data" && (h >= 0 && h <= 23) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59));
    return (h * 3600000 + m * 60000 + s * 1000);
}