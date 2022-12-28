// Kata Conditions
// ---------------------------
// You live in the city of Cartesia where all roads are laid out in a perfect grid.
// You arrived ten minutes too early to an appointment, so you decided to take the opportunity to go for a short walk.
// The city provides its citizens with a Walk Generating App on their phones -- everytime you press the button it sends you
// an array of one - letter strings representing directions to walk (eg.['n', 's', 'w', 'e']).
// You always walk only a single block for each letter(direction) and you know it takes you one minute to traverse one city block, 
// so create a function that will return true if the walk the app gives you will take you exactly ten minutes
// (you don't want to be early or late!) and will, of course, return you to your starting point. 
// Return false otherwise.
//
// Note: you will always receive a valid array containing a random assortment of direction letters('n', 's', 'e', or 'w' only).
// It will never give you an empty array (that's not a walk, that's standing still!).

// The idea of solution lays in Cartesian coordinate system, where northern direction is positive y (y),  
// ----------------------------------------------------------------southern direction is negative y (-y),
// ----------------------------------------------------------------eastern direction is positive x (x),
// ----------------------------------------------------------------western direction is negative x (-x).
//
// By moving in directions, 'n' correspond to increasing y (as nothern direction - positive y),
// -------------------------'s' correspond to decreasing y (as souther direction - negative -y),
// -------------------------'e' correspond to increasing x (as eastern direction - positive x),
// -------------------------'w' correspond to decreasing x (as western direction - negative -x).
//
// Exactly 10 minutes of walk means exactly size 10 of input vector with directions.
// Returning to starting position means returning to the starting point in coordinate system (0,0);

#include <vector>

bool isValidWalk(std::vector<char> walk)
{
    // We need exactly 10 minutes of walk, not less or more
    if (walk.size() != 10)
    {
        return false;
    }
    else
    {
        // Cartesian coordinates
        int x = 0, y = 0;

        for (const unsigned char& dir : walk)
        {
            switch (dir)
            {
            case 'n': // Positive y (y) direction
            {
                ++y;
                break;
            }
            case 's': // Negative y (-y) direction
            {
                --y;
                break;
            }
            case 'e': // Positive x (x) direction
            {
                ++x;
                break;
            }
            case 'w': // Negative x (-x) direction
            {
                --x;
                break;
            }
            }
        }

        return (x == 0 && y == 0);
    }

    return false;
}