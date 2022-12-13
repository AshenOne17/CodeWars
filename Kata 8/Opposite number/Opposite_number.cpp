// Very simple, given an integer or a floating-point number, find its opposite.

long opposite(long long number) {
	return(number > 0 ? number - number * 2 : number * (-1));
}