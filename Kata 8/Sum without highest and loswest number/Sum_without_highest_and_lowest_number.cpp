// Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).
//
// The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.
//
// Mind the input validation.

#include<vector>

int sum(const std::vector<int>& numbers) {
    if (numbers.empty() || numbers.size() < 2) return 0;

    int min = numbers[0], max = numbers.back(), sum{ 0 };
    for (int element : numbers) {
        // iterating though array counting sum and looking 
        // for highest and lowest element simultaneously
        if (min > element) min = element;
        if (max < element) max = element;
        sum += element;
    }
    // sum without highest and lowest number
    sum -= min;
    sum -= max;
    return sum;
}