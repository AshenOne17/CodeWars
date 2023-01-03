// Given two arrays of strings a1 and a2 return a sorted array r in lexicographical order of the strings of a1 which are substrings of strings of a2.
//
// Example 1:
// 
// a1 = ["arp", "live", "strong"]
//
// a2 = ["lively", "alive", "harp", "sharp", "armstrong"]
//
// returns["arp", "live", "strong"]
//
// Example 2:
// 
// a1 = ["tarp", "mice", "bull"]
//
// a2 = ["lively", "alive", "harp", "sharp", "armstrong"]
//
// returns[]

#include <vector>
#include <string>
#include <unordered_set>

class WhichAreIn
{
public:
    static std::vector<std::string> inArray(std::vector<std::string>& array1, std::vector<std::string>& array2)
    {
        std::unordered_set<std::string> result; // To check if a substring has already been found in array2 in constant time.

        for (const auto& wordA : array1)
        {
            for (const auto& wordB : array2)
            {
                if (wordB.find(wordA) != std::string::npos)
                {
                    result.insert(wordA);
                    break;
                }
            }
        }

        // unordered_set make the code faster in practice by avoiding the need to insert duplicates into the result vector.
        std::vector<std::string> result_vec(result.begin(), result.end());

        std::sort(result_vec.begin(), result_vec.end());

        return result_vec;
    }
};