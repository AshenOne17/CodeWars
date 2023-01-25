/*
* Two tortoises named A and B must run a race. 
  A starts with an average speed of 720 feet per hour. 
  Young B knows she runs faster than A, and furthermore has not finished her cabbage.

  When she starts, at last, she can see that A has a 70 feet lead but B's speed is 850 feet per hour. 
  How long will it take B to catch A?

  More generally: 
  given two speeds v1 (A's speed, integer > 0) and v2 (B's speed, integer > 0) and a lead g (integer > 0) 
  how long will it take B to catch A?

  The result will be an array [hour, min, sec] which is the time needed in hours, 
  minutes and seconds (round down to the nearest second) or a string in some languages.

  If v1 >= v2 then return nil, nothing, null, None or {-1, -1, -1} for C++, C, Go, Nim, Pascal, COBOL, Erlang, [-1, -1, -1]...

  Examples:
  (form of the result depends on the language)

  race(720, 850, 70) => [0, 32, 18] or "0 32 18"
  race(80, 91, 37)   => [3, 21, 49] or "3 21 49"
*/

/*
* So it's mostly basic math problem regarding 2 objects, one of which is moving faster but being behind, 
  and the other one moving slower and being leading, and the main task is to find the amount of time after finding the reaching speed
  in which the faster object will reach the slower but leading one.
*/

class Tortoise
{
public:
    static std::vector<int> race(int v1, int v2, int g) 
    {
        // If leading's turtle speed is higher, it is obvious that other turtle won't ever reach the leading one
        if (v1 >= v2)
            return { -1, -1, -1 };

        // Calculating the reaching speed (not necessary, but better for readability)
        int speed_difference = v2 - v1;

        // Fractional part of the division to be converted into the minutes and seconds
        double fractional = 0;

        // Integral part of the division (not necessary, but my compiler gave me warning, which I didn't like :D)
        double integral_part = modf(((double)g / speed_difference) * 3600, &fractional);

        int minutes = (int)fractional / 60;
        int seconds = (int)fractional % 60;

        return { minutes / 60, minutes % 60, seconds };
    }
};