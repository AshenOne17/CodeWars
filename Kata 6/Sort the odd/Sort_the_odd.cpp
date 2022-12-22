// Task
// ----
// You will be given an array of numbers.
// You have to sort the odd numbers in ascending order while leaving the even numbers at their original positions.
//
// Examples:
// 
// [7, 1] = > [1, 7]
// [5, 8, 6, 3, 4] = > [3, 8, 6, 5, 4]
// [9, 8, 7, 6, 5, 4, 3, 2, 1, 0] = > [1, 8, 3, 6, 5, 4, 7, 2, 9, 0]

#include <vector>
#include <utility> // For std::swap

class Kata {
public:
    std::vector<int> sortArray(std::vector<int> array) {
        std::vector<int> temp; // Temporary vector to hold odd indices

        int count = 0; // Variable holding number of odd elements

        // Assisgning odd indices to the array
        for (int i = 0; i < array.size(); i++) {
            // If an element is odd
            if (array[i] & 1) {
                temp.push_back(i);
                ++count;
            }
        }

        // Swapping values of original array according to our temporary indices array
        for (int i = 0; i < count - 1; i++) {
            for (int j = 0; j < count - 1 - i; j++) {
                if (array[temp[j + 1]] < array[temp[j]])
                    std::swap(array[temp[j + 1]], array[temp[j]]);
            }
        }

        return array;
    }
};