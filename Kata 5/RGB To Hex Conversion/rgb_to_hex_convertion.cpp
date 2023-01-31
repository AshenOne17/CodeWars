/*
* The rgb function is incomplete. 
  Complete it so that passing in RGB decimal values will result in a hexadecimal representation being returned. 
  Valid decimal values for RGB are 0 - 255. 
  Any values that fall out of that range must be rounded to the closest valid value.

  Note: Your answer should always be 6 characters long, the shorthand with 3 will not work here.

  The following are examples of expected output values:

  rgb(255, 255, 255) # returns FFFFFF
  rgb(255, 255, 300) # returns FFFFFF
  rgb(0,0,0) # returns 000000
  rgb(148, 0, 211) # returns 9400D3
*/

#include <sstream> // For std::stringstream
#include <string>
#include <iomanip> // For std::setfill, std::setw, std::uppercase, std::hex
#include <algorithm> // For std::min, std::max

class RGBToHex 
{
public:
    static std::string rgb(int r, int g, int b) 
    {
        std::string result = "";

        // 'sstream' object for keeping our converted hex number
        std::stringstream hex_r;

        // 'std::setfill('0')' used for filling out hex code with 0s, 'std::setw(2)' to output only 2 symbols of hex number into sstream object
        // 'std::uppercase' for making the whole string uppercase, 'std::min(255, std::max(0, r))' to round number to 0 if it's less than 0
        hex_r << std::setfill('0') << std::setw(2) << std::hex << std::uppercase << std::min(255, std::max(0, r));

        // Converting our hex number stored in 'sstream' object into string and adding it to the result
        result += hex_r.str();

        std::stringstream hex_g;
        hex_g << std::setfill('0') << std::setw(2) << std::hex << std::uppercase << std::min(255, std::max(0, g));
        result += hex_g.str();

        std::stringstream hex_b;
        hex_b << std::setfill('0') << std::setw(2) << std::hex << std::uppercase << std::min(255, std::max(0, b));
        result += hex_b.str();

        return result;
    }
};