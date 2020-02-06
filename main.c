#include <stdio.h>

#include "complex_fns.c"

int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};

	for(int i = 0; i < 5; i++) {
		funct1(hand1[i], a, b);
	}

	for(int i = 0; i < 3; i++) {
		funct2(hand2[i], a);
		funct2(hand2[i], b);
	}

	return 0;
}
