/*
* 
 The drawing below gives an idea of how to cut a given "true" rectangle into squares 
 ("true" rectangle meaning that the two dimensions are different).

 (--- = 1 px)
 *** 5 x 3 rectangle ***
                                                      ___ ___ ___ ___ ___
 1) ___ ___ ___   2)  ___ ___  3) ___  4) ___  |     |   |   |   |   |   |
   |   |   |   |     |   |   |   |___|   |___| | ==  |   |   |   |   |   |
   |   |   |   |     |___|___|                 | ==  |___|___|___|___|___|
   |___|___|___|                               |

 1) 3 * 3 = 9 (array.insert(3))
 2) 2 * 2 = 4 (array.insert(2))
 3) 1 * 1 = 1 (array.insert(1))
 4) 1 * 1 = 1 (array.insert(1))

 Can you translate this drawing into an algorithm?

 You will be given two dimensions

 a positive integer length
 a positive integer width

 You will return a collection or a string with the size of each of the squares.

 Examples in general form:

  sqInRect(5, 3) should return [3, 2, 1, 1]
  sqInRect(3, 5) should return [3, 2, 1, 1]

 Notes:
 lng == wdth as a starting case would be an entirely different problem and the drawing is planned to be interpreted with lng != wdth.

 When the initial parameters are so that lng == wdth, the solution [lng] would be the most obvious but not in the spirit of this kata 
 so, in that case, return return {} with C++.

 In that case the returned structure of C will have its sz component equal to 0.
* 
*/

#include <vector>

class SqInRect
{
public:
    static std::vector<int> sqInRect(int lng, int wdth)
    {
        if (lng == wdth)
            return { lng };

        std::vector<int> squares;

        while (lng > 0 && wdth > 0)
        {
            if (lng < wdth)
            {
                squares.push_back(lng);
                wdth -= lng;
            }
            else
            {
                squares.push_back(wdth);
                lng -= wdth;
            }
        }

        return squares;
    }
};