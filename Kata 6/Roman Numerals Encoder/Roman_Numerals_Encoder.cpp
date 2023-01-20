/*
* 
 Create a function taking a positive integer between 1 and 3999 (both included) as its parameter and returning a string 
 containing the Roman Numeral representation of that integer.

 Modern Roman numerals are written by expressing each digit separately starting with the left most digit and skipping any digit with a value of zero. 
 In Roman numerals 1990 is rendered: 1000=M, 900=CM, 90=XC; resulting in MCMXC. 
 2008 is written as 2000=MM, 8=VIII; or MMVIII. 
 1666 uses each Roman symbol in descending order: MDCLXVI.

 Example:

 solution(1000); // should return "M"
 Help:

 Symbol    Value
 I          1
 V          5
 X          10
 L          50
 C          100
 D          500
 M          1,000

 Remember that there can't be more than 3 identical symbols in a row.
*/

#include <string>

string intToRoman(int num) {
    
    // String to store all possible roman numbers
    std::string symbol[] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };

    // Convertable values
    int value[] = { 1000,900,500,400,100,90,50,40,10,9,5,4,1 };

    std::string roman = "";

    for (int i = 0; num != 0; i++) 
    {
        while (num >= value[i]) 
        {
            // Decreasing our non - roman input number by a specific convertable value corresponding each to the string storing corresponding roman numbers
            num -= value[i];
            roman += symbol[i];
        }
    }

    return roman;
}