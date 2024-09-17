#include <stdio.h>

int main() {
	float a, b, r, s, pi = 3.14;
	int mode;
	printf("Input 1 for rectangle, 2 for triangle and 3 for circle:");
	scanf_s("%d", &mode);
	if (mode == 1) {
		printf("Input sides of the rectangle:");
		scanf_s("%f %f", &a, &b);
		s = a * b;
	}
	if (mode == 2) {
		printf("Input base side and height of the triangle");
		scanf_s("%f %f", &a, &b);
		s = 0.5 * a * b;
	}
	if (mode == 3) {
		printf("Input radius of the circle:");
		scanf_s("%f", &r);
		s = pi * r * r;
	}
	printf("Your result: %f", s);
}