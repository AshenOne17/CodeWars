// Write a function that will return the count of distinct case-insensitive alphabetic characters and numeric digits that occur more than once in the input string.
// The input string can be assumed to contain only alphabets(both uppercase and lowercase) and numeric digits.
//
// Examples:
// 
// "abcde" -> 0 # no characters repeats more than once
// "aabbcde" -> 2 # 'a' and 'b'
// "aabBcde" -> 2 # 'a' occurs twice and 'b' twice(`b` and `B`)
// "aA11" -> 2 # 'a' and '1'
// "ABBA" -> 2 # 'A' and 'B' each occur twice

#include <unordered_map>

size_t duplicateCount(const std::string& in); // Helper for tests

size_t duplicateCount(const char* in)
{
    std::unordered_map<char, int> letter_counter; // Hash map to store values in format: [letter, number of letter's appearences]

    size_t duplicates = 0;

    for (int i = 0; i < strlen(in); i++)
    {
        char key = in[i];

        if (key > 64 && key < 91) // Making capital letters lowercase as we count them as insensitive
            key += 32;

        letter_counter[key]++; // Adding a pair into hash map or updating existing value of key if it duplicates
    }

    for (const auto& pair : letter_counter)
    {
        if (pair.second > 1) // If number of appearences is more than one (duplicate)
            ++duplicates;
    }

    return duplicates;
}