#include <stdio.h>
#include "my_complex.h"
#include "complex_fns.c"

int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};

	hand1[0] = complex_add;
	hand1[1] = complex_sub;
	hand1[2] = complex_mult;
	hand1[3] = complex_div;
	hand2[0] = magnitude;
	hand2[1] = phase;

	for(int i = 0; i < 5; i++) {
		funct1(hand1[i], a, b);
	}

	for(int i = 0; i < 3; i++) {
		funct2(hand2[i], a);
		funct2(hand2[i], b);
	}

	return 0;
}
