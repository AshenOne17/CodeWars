// Deoxyribonucleic acid(DNA) is a chemical found in the nucleus of cellsand carries the "instructions" 
// for the developmentand functioning of living organisms.
//
// In DNA strings, symbols "A" and "T" are complements of each other, as "C" and "G".
// Your function receives one side of the DNA(string, except for Haskell); you need to return the other complementary side.
// DNA strand is never empty or there is no DNA at all(again, except for Haskell).

#include <string>

std::string DNAStrand(const std::string& dna) {
    std::string reversedDNA = {};
    for (char ch : dna) {
        if (ch == 'T') reversedDNA += 'A';
        if (ch == 'A') reversedDNA += 'T';
        if (ch == 'C') reversedDNA += 'G';
        if (ch == 'G') reversedDNA += 'C';
    }
    return reversedDNA;
}