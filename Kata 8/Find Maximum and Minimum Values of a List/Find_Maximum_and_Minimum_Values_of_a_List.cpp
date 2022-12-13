// Your task is to make two functions(maxand min, or maximum and minimum, etc., depending on the language) that receive a list of integers as input, 
// and return the largest and lowest number in that list, respectively.

#include <vector>


int min(const std::vector<int>& list) {
    int min = list[0];
    for (const int element : list) { 
        if (min > element) min = element; 
    }
    return min;
}

int max(const std::vector<int>& list) {
    int max = list[0];
    for (const int element : list) { 
        if (max < element) max = element; 
    }
    return max;
}