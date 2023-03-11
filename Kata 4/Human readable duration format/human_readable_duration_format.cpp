/*
 * Your task in order to complete this Kata is to write a function which formats a duration, given as a number of seconds, in a human-friendly way.

  The function must accept a non-negative integer.
  If it is zero, it just returns "now".
  Otherwise, the duration is expressed as a combination of years, days, hours, minutes and seconds.

  It is much easier to understand with an example:

  - For seconds = 62, your function should return 
    "1 minute and 2 seconds"
    
  - For seconds = 3662, your function should return
    "1 hour, 1 minute and 2 seconds"
    
  For the purpose of this Kata, a year is 365 days and a day is 24 hours.

  Note that spaces are important.

  Detailed rules:
  
  The resulting expression is made of components like 4 seconds, 1 year, etc.
  In general, a positive integer and one of the valid units of time, separated by a space.
  The unit of time is used in plural if the integer is greater than 1.

  The components are separated by a comma and a space (", ").
  Except the last component, which is separated by " and ", just like it would be written in English.

  A more significant units of time will occur before than a least significant one.
  Therefore, 1 second and 1 year is not correct, but 1 year and 1 second is.

  Different components have different unit of times.
  So there is not repeated units like in 5 seconds and 1 second.

  A component will not appear at all if its value happens to be zero.
  Hence, 1 minute and 0 seconds is not valid, but it should be just 1 minute.

  A unit of time must be used "as much as possible".
  It means that the function should not return 61 seconds, but 1 minute and 1 second instead.
  Formally, the duration specified by of a component must not be greater than any valid more significant unit of time.
 */

#include <string>
#include <sstream>

std::string format_duration(int seconds)
{
    if (seconds < 0)
    {
	    return "Input is a negative integer! Only non-negative are permitted!";
    }
    else if (seconds == 0)
    {
	    return "now";
    }

    std::stringstream result_string;

    // Variable to track the number of time variables
    int number_of_value = 0;

    // Calculating years by first calculating number of seconds in year (multiplication) and dividing given number by it to get
    // integer with no remainder indicating the number of years
    const int years = seconds / (60 * 60 * 24 * 365);

    if (years > 0)
        number_of_value++;

    // Reducing the remaining number of seconds after calculating number of years by modulo (remainder) operator
    seconds %= 60 * 60 * 24 * 365;

    // Same calculation applies to days, hours, minutes
    const int days = seconds / (60 * 60 * 24);

    if (days > 0)
        number_of_value++;

    // Same applies to reducing the remaining number of seconds after calculating current time value
    seconds %= 60 * 60 * 24;

    const int hours = seconds / (60 * 60);

    if (hours > 0)
        number_of_value++;

    seconds %= 60 * 60;

    const int minutes = seconds / 60;

    if (minutes > 0)
        number_of_value++;

    seconds %= 60;

    if (seconds > 0)
        number_of_value++;

    // Since we have to compose string of time values in order from highest to lowest, year should be first
    if (years > 0)
    {
        // If there are more than 2 time variables present, separate them by comma
	    if (number_of_value > 2)
	    {
            result_string << years << " year" << (years > 1 ? "s" : "") << ", ";
	    }
        // If there is 1 time variable present, it is either last one or the only one
        else if (number_of_value == 1)
        {
	        result_string << years << " year" << (years > 1 ? "s" : "");
        }
        // If there are exactly 2 time variables (or it's the variable before last one), separate them by 'and'
        else
        {
	        result_string << years << " year" << (years > 1 ? "s" : "") << " and ";
        }

        number_of_value--;
    }

    // Exactly same applies for every other time variable
    if (days > 0)
    {
	    if (number_of_value > 2)
	    {
            result_string << days << " day" << (days > 1 ? "s" : "") << ", ";
	    }
        else if (number_of_value == 1)
        {
	        result_string << days << " day" << (days > 1 ? "s" : "") << ", ";
        }
        else
        {
	        result_string << days << " day" << (days > 1 ? "s" : "") << " and ";
        }

        number_of_value--;
    }

    if (hours > 0)
    {
	    if (number_of_value > 2)
	    {
            result_string << hours << " hour" << (hours > 1 ? "s" : "") << ", ";
	    }
        else if (number_of_value == 1)
        {
	        result_string << hours << " hour" << (hours > 1 ? "s" : "");
        }
        else
        {
	        result_string << hours << " hour" << (hours > 1 ? "s" : "") << " and ";
        }

        number_of_value--;
    }

    if (minutes > 0)
    {
	    if (number_of_value > 2)
	    {
            result_string << minutes << " minute" << (minutes > 1 ? "s" : "") << ", ";
	    }
        else if (number_of_value == 1)
        {
	        result_string << minutes << " minute" << (minutes > 1 ? "s" : "");
        }
        else
        {
	        result_string << minutes << " minute" << (minutes > 1 ? "s" : "") << " and ";
        }
    }

    // Except for seconds, which is last anyway and in any possible input (or the only one)
    if (seconds > 0)
    {
	    result_string << seconds << " second" << (seconds > 1 ? "s" : "");
    }

    return result_string.str();
}