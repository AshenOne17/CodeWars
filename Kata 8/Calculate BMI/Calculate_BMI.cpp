// Write function bmi that calculates body mass index(bmi = weight / height2).
//
// if bmi <= 18.5 return "Underweight"
//
// if bmi <= 25.0 return "Normal"
//
// if bmi <= 30.0 return "Overweight"
//
// if bmi > 30 return "Obese"

#include <cmath>

std::string bmi(double w, double h) {
	double index = (w / (h * h));
	// rounding up the decimal point digits(not the number by itself) 
	// due to > 30 and <= 30 conflict caused by float number calculation 
	// in c++ (30.000000000000004 instead of 30(on my pc))
	index = floor(index * 100.00) / 100.00;

	if (index <= 18.5) { return "Underweight"; }
	else if (index > 18.5 && index <= 25.0) { return "Normal"; }
	else if (index > 25.0 && index <= 30) { return "Overweight"; }
	else if (index > 30) { return "Obese"; }

	return "Error calculating";
}