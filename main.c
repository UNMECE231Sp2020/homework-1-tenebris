#include <stdio.h>
#include "my_complex.h"

int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};

	Complex (*hand1[4])(Complex c1, Complex c2) = {complex_add, complex_sub, complex_mult, complex_div};
	double (*hand2[2])(Complex c) = {magnitude, phase};

	for(int i = 0; i < 4; i++)
		print4(hand1[i], a, b);

	for(int i = 0; i < 2; i++)
		print2(hand2[i], a);

	return 0;
}