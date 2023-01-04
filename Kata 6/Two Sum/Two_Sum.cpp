/*
* ---Kata conditions---:
* 
* Write a function that takes an array of numbers (integers for the tests) and a target number. 
  It should find two different items in the array that, when added together, give the target value. 
  The indices of these items should then be returned in a tuple / list (depending on your language) like so: (index1, index2).

  For the purposes of this kata, some tests may have multiple answers; any valid solutions will be accepted.

  The input will always be valid (numbers will be an array of length 2 or greater, and all of the items will be numbers; 
  target will always be the sum of two different items from that array).

  Example:
  --------------------------------------------------
  two_sum({1, 2, 3}, 4); // returns {0, 2} or {2, 0}
  --------------------------------------------------
*  
* 
*/

/*
* Explanation of implementation:
*
* We iterate through the whole vector and do following for each numbers[i] element:
*
* 1) We calculate the complement of the element (target - numbers[i])
*
* 2) We check if there is value, equal to the complement of the element, named entry of the complement (already present in the map).
* In other words, we have 'target - numbers[i]', and we search in map, if we have a value with key (index),
* that added to numbers[i] will give us target.
*
* target - numbers[i] = x (x - complement and value we are searching in the map)
* ---found x---
* target = x + numbers[i]
* return {i, key[x]}
*    ^
* 3) | if we found that value, it means that adding it to the complement ('target - numbers[i]') will give us the result.
*
* 4) Return index of element's complement we were calculating and key of value being entry of the complement.
*
* 5) If none was found, return void pair ({0, 0}).
*
* ------------------------------------------------
* Example:
* target = 10, numbers = {..., 5, ...}
*
* 1) Complement is equal to 10 - 5 = 5
*
* 2) Found entry of the complement = 5
*
* 3) numbers[i] = 5, x = 5, target = 10;
*    5 + 5 = 10
*
* 4) Return i, key[x].
* ------------------------------------------------
* 
*/

#include <unordered_map>
#include <vector>

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
    // Used to store indices of the elements, being complements, that have been seen so far
    std::unordered_map<int, std::size_t> seen;

    for (std::size_t i = 0; i < numbers.size(); i++)
    {
        int complement = target - numbers[i];

        // If we have already met the first number
        if (seen.count(complement))
        {
            // Return current index and key of value being entry of the complement
            return std::make_pair(seen[complement], i);
        }

        // Assigning entry to complement (current element) to index (key)
        seen[numbers[i]] = i;
    }

    return std::make_pair(0, 0);
}