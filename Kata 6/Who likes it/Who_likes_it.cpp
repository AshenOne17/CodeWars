// You probably know the "like" system from Facebook and other pages. People can "like" blog posts, pictures or other items.
// We want to create the text that should be displayed next to such an item.
//
// Implement the function which takes an array containing the names of people that like an item.
// It must return the display text as shown in the examples :
//
// [] -- > "no one likes this"
// ["Peter"] -- > "Peter likes this"

#include <string>
#include <vector>

std::string likes(const std::vector<std::string>& names)
{
    std::string result = {};

    if (names.empty()) { 
        return "no one likes this"; 
    }

    // One person likes
    if (names.size() == 1) { 
        return names[0] + " likes this"; 
    }
    // Two people like
    else if (names.size() == 2) { 
        return names[0] + " and " + names[1] + " like this"; 
    }
    // Three people like
    else if (names.size() == 3) { 
        return names[0] + ", " + names[1] + " and " + names[2] + " like this"; 
    }
    // More than 3 people like
    else { 
        return names[0] + ", " + names[1] + " and " + std::to_string(names.size() - 2) + " others like this"; 
    }

    return "error";
}