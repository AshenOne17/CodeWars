// A child is playing with a ball on the nth floor of a tall building.The height of this floor above ground level, h, is known.
// He drops the ball out of the window.The ball bounces (for example), to two - thirds of its height(a bounce of 0.66).
// His mother looks out of a window 1.5 meters from the ground.
// 
// How many times will the mother see the ball pass in front of her window(including when it's falling and bouncing?
//
// Three conditions must be met for a valid experiment:
// 
// 1) Float parameter "h" in meters must be greater than 0.
// 
// 2) Float parameter "bounce" must be greater than 0 and less than 1.
// 
// 3) Float parameter "window" must be less than h.
// 
// 4) If all three conditions above are fulfilled, return a positive integer, otherwise return -1.
//
//    Note :
//    The ball can only be seen if the height of the rebounding ball is strictly greater than the window parameter.
//
//    Examples :
//    -h = 3, bounce = 0.66, window = 1.5, result is 3
//
//    -h = 3, bounce = 1, window = 1.5, result is - 1
//
//    (Condition 2) not fulfilled).

class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window) {
        if (h < 0 || bounce <= 0 || bounce >= 1 || window >= h)
            return -1;

        int times = 0;

        while (h > window) {
            h *= bounce;
            
            if (h < window)
                break;

            times += 2;
        }

        return --times;
    }
};