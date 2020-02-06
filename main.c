#include <stdio.h>
#include "my_complex.h"

int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};

	Complex (*hand1[4])(Complex c1, Complex c2) = {complex_add, complex_sub, complex_mult, complex_div};
	double (*hand2[2])(Complex c) = {magnitude, phase};

	for(int i = 0; i < 5; i++) {
		funct1(hand1[i], a, b);
	}

	for(int i = 0; i < 3; i++) {
		funct2(hand2[i], a);
		funct2(hand2[i], b);
	}

	return 0;
}
