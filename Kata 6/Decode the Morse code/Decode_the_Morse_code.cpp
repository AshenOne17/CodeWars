// In this kata you have to write a simple Morse code decoder.
// While the Morse code is now mostly superseded by voiceand digital data communication channels, 
// it still has its use in some applications around the world.
// 
// The Morse code encodes every character as a sequence of "dots" and "dashes".
// For example, the letter A is coded as ·−, letter Q is coded as −−·−, and digit 1 is coded as ·−−−−.
// The Morse code is case-insensitive, traditionally capital letters are used.
// When the message is written in Morse code, a single space is used to separate the character codes and 3 spaces are used 
// to separate words. For example, the message HEY JUDE in Morse code is "···· · −·−−   ·−−− ··− −·· ·".
//
// NOTE: Extra spaces before or after the code have no meaning and should be ignored.
//
// In addition to letters, digitsand some punctuation, there are some special service codes, the most notorious of 
// those is the international distress signal SOS(that was first issued by Titanic), that is coded as "···−−−···".
// These special codes are treated as single special characters, and usually are transmitted as separate words.
//
// Your task is to implement a function that would take the morse code as inputand return a decoded human - readable string.
//
// For example :
//
// decodeMorse('.... . -.--   .--- ..- -.. .')
// should return "HEY JUDE"
// 
// NOTE : For coding purposes you have to use ASCII characters . and -, not Unicode characters.
//
// The Morse code table is preloaded for you as a dictionary, feel free to use it :
//
// Coffeescript / C++ / Go / JavaScript / Julia / PHP / Python / Ruby / TypeScript : MORSE_CODE['.--']

#include <string>

std::string decodeMorse(const std::string& morseCode) 
{
    // Special symbols (like SOS) decoding is within my implementation, without need of extra code
    std::string decoded = "", currentLetter = "";

    int consecutiveSpaces = 0;

    // Checking for leading space
    bool isFirstLetter = true;

    for (const char& ch : morseCode) 
    {
        if (ch == ' ' && isFirstLetter) 
        {
            // Skip leading spaces
            continue;
        }

        if (ch == ' ') 
        {
            consecutiveSpaces++;
            if (consecutiveSpaces > 2) // Though in regular Morse code it is 7 characters, for this Kata 2 is enough, so number is flexible
            {
                // If we encountered space that should be decoded (meaning its more than 1 space and its not a letter separation)
                decoded += ' ';
                // Decode it and reset the counyter
                consecutiveSpaces = 0;
            }
            else
            {
                decoded += MORSE_CODE[currentLetter];
                currentLetter = "";
            }
        }
        else 
        {
            if (isFirstLetter) 
            {
                currentLetter = ch;
                isFirstLetter = false;
            }
            else 
            {
                currentLetter += ch;
            }

            consecutiveSpaces = 0;
        }
    }

    // Append decoded letter for last morse code sequence
    if (!currentLetter.empty()) {
        decoded += MORSE_CODE[currentLetter];
    }

    // Remove trailing spaces
    while (!decoded.empty() && decoded.back() == ' ') {
        decoded.pop_back();
    }

    return decoded;
}