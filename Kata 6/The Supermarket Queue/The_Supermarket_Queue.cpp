/*
* There is a queue for the self-checkout tills at the supermarket. 
Your task is write a function to calculate the total time required for all the customers to check out!

- input:

 customers: an array of positive integers representing the queue. 
 Each integer represents a customer, and its value is the amount of time they require to check out.

 n: a positive integer, the number of checkout tills.

- output:

 The function should return an integer, the total time required.

- Examples:

 queueTime(std::vector<int>{5,3,4}, 1)

 // should return 12
 // because when n=1, the total time is just the sum of the times

 queueTime(std::vector<int>{10,2,3,3}, 2)

 // should return 10
 // because here n=2 and the 2nd, 3rd, and 4th people in the 
 // queue finish before the 1st person has finished.

 queueTime(std::vector<int>{2,3,10}, 2)

 // should return 12

- Clarifications:

 There is only ONE queue serving many tills, and
 The order of the queue NEVER changes, and
 The front person in the queue (i.e. the first element in the array/list) proceeds to a till as soon as it becomes free.
 N.B. You should assume that all the test input will be valid, as specified above.
*/

#include <vector>
#include <algorithm> // for std::min_element and std::max

long queueTime(std::vector<int> customers, int n)
{
    // Initialize a vector of tills with n elements all set to 0
    std::vector<int> tills(n, 0);

    int maxTime = 0;

    for (auto i : customers)
    {
        // Find the minimum time in the tills (dereferencing pointer since std::min_element returns an iterator)
        int minTill = *std::min_element(tills.begin(), tills.end());

        // Get the index of the till with the least amount of time
        int index = std::min_element(tills.begin(), tills.end()) - tills.begin();

        // Add the customer's time to the till with the least time
        tills[index] = minTill + i;

        // update maxTime variable if the time of the till is greater than maxTime
        maxTime = std::max(maxTime, tills[index]);
    }

    return maxTime;
}