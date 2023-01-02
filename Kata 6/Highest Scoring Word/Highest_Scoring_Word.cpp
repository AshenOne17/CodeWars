// Given a string of words, you need to find the highest scoring word.
//
// Each letter of a word scores points according to its position in the alphabet : a = 1, b = 2, c = 3 etc.
//
// You need to return the highest scoring word as a string.
//
// If two words score the same, return the word that appears earliest in the original string.
//
// All letters will be lowercase and all inputs will be valid.

#include <string>
#include <map>

std::string highestScoringWord(const std::string & str)
{
    std::stringstream split(str); // To split our input into words

    std::string token = "";

    std::map<std::string, int> counts; // To store the value of each word

    while (split >> token) 
    {
        int sum = 0;

        for (const auto& letter : token) 
        {
            sum += letter - 96;
        }

        counts.insert(std::make_pair(token, sum)); // Storing word and its value
    }

    using pair_type = decltype(counts)::value_type; // To avoid longwriting in using function

    auto pr = std::max_element // Checking for highest value (and earliest, because of std::map storing values in order) 
    (
        std::begin(counts), std::end(counts),
        [](const pair_type& p1, const pair_type& p2) 
        {
            return p1.second < p2.second;
        }
    );

    return pr->first;
}