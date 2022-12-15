// Given two integers aand b, which can be positive or negative, find the sum of all the integers betweenand including themand return it.
// If the two numbers are equal return a or b.
//
// Note: a and b are not ordered!

int get_sum(int a, int b) {
	return (std::abs(a - b) + 1) * (a + b) / 2;
}