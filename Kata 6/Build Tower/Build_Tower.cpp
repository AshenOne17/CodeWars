/*
* 
 Build Tower
Build a pyramid-shaped tower, as an array/list of strings, given a positive integer number of floors. A tower block is represented with "*" character.

For example, a tower with 3 floors looks like this:

[
  "  *  ",
  " *** ", 
  "*****"
]
And a tower with 6 floors looks like this:

[
  "     *     ", 
  "    ***    ", 
  "   *****   ", 
  "  *******  ", 
  " ********* ", 
  "***********"
]
* 
*/

#include <vector>
#include <string>

std::vector<std::string> towerBuilder(unsigned nFloors) {
    vector<string> tower;

    for (int i = 0; i < nFloors; i++) {
        // Calculate the number of asterisks in this row
        int numAsterisks = (i * 2) + 1;

        // Calculate the number of spaces on either side of the asterisks
        int numSpaces = nFloors - i - 1;

        // Build the row as a string
        string row = string(numSpaces, ' ') + string(numAsterisks, '*') + string(numSpaces, ' ');

        // Add the row to the tower
        tower.push_back(row);
    }

    return tower;
}