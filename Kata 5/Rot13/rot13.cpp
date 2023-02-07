/*
* ROT13 is a simple letter substitution cipher that replaces a letter with the letter 13 letters after it in the alphabet. 
  ROT13 is an example of the Caesar cipher.

  Create a function that takes a string and returns the string ciphered with Rot13. 
  If there are numbers or special characters included in the string, they should be returned as they are. 
  Only letters from the latin/english alphabet should be shifted, like in the original Rot13 "implementation".
*/

#include <string>

std::string rot13(std::string msg)
{
    std::string result = "";

    for (int i = 0; i < msg.length(); i++) 
    {
        if (msg[i] >= 'A' && msg[i] <= 'Z') 
        {
            // Shift the character by 13 places and wrap it back (by modulo % 26) into the alphabet if necessary
            result += ((msg[i] - 'A' + 13) % 26) + 'A';
        }
        else if (msg[i] >= 'a' && msg[i] <= 'z') 
        {
            // Shift the character by 13 places and wrap it back (by modulo % 26) into the alphabet if necessary
            result += ((msg[i] - 'a' + 13) % 26) + 'a';
        }
        else 
        {
            // If the character is any other but an alphabet symbol, just add it to the result
            result += msg[i];
        }
    }

    return result;
}