// There was a test in your classand you passed it.Congratulations!
// But you're an ambitious person. You want to know if you're better than the average student in your class.
//
// You receive an array with your peers' test scores. Now calculate the average and compare your score!
//
// Return True if you're better, else False!
//
// Note :
// Your points are not included in the array of your class's points. For calculating the average point you may add your point to the given array!

#include <vector>

bool betterThanAverage(const std::vector<int>& classPoints, int yourPoints) {
    // variable to track sum of scores (own included)
    double sum{ static_cast<double>(yourPoints) };

    // calculating sum
    for (const auto element : classPoints) { 
        sum += element; 
    }

    // counting average in class (own included) and comparing with own score
    return ((sum / static_cast<double>(classPoints.size() + 1)) < yourPoints);
}