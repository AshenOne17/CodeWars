/*
* You are given an array(list) strarr of stringsand an integer k.
  Your task is to return the first longest string consisting of k consecutive strings taken in the array.

  Examples:
  strarr = ["tree", "foling", "trashy", "blue", "abcdef", "uvwxyz"], k = 2

  Concatenate the consecutive strings of strarr by 2, we get :

  treefoling  (length 10)  concatenation of strarr[0] and strarr[1]
  folingtrashy("      12)  concatenation of strarr[1] and strarr[2]
  trashyblue  ("      10)  concatenation of strarr[2] and strarr[3]
  blueabcdef  ("      10)  concatenation of strarr[3] and strarr[4]
  abcdefuvwxyz("      12)  concatenation of strarr[4] and strarr[5]

  Two strings are the longest : "folingtrashy" and "abcdefuvwxyz".
  The first that came is "folingtrashy" so
  longest_consec(strarr, 2) should return "folingtrashy".

  n being the length of the string array, if n = 0 or k > n or k <= 0 return "" (return Nothing in Elm, "nothing" in Erlang).
  
  Note:
* consecutive strings : follow one after another without an interruption
*/

#include <vector>
#include <string>

class LongestConsec
{
public:
    static std::string longestConsec(const std::vector<std::string>& strarr, int k)
    {
        std::string::size_type len = strarr.size();

        if (len == 0 || k > len || k <= 0)
            return "";

        std::string longest = "";

        for (size_t i = 0; i < len - k + 1; i++)
        {
            std::string temp = "";
            for (size_t j = i; j < i + k; j++)
            {
                temp += strarr[j];
            }
            if (temp.length() > longest.length())
            {
                longest = temp;
            }
        }

        return longest;
    }
};