// Given a non - negative integer, 3 for example, return a string with a murmur : "1 sheep...2 sheep...3 sheep...".
// Input will always be valid, i.e.no negative integers.

#include <string>

std::string countSheep(int number) {
    int count{ 1 };
    std::string sequence;
    while (count <= number) {
        sequence += std::to_string(count) + " sheep...";
        count++;
    }
    return sequence;
}