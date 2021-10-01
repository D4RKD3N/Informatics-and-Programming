#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, res1, res2, res3, res4;
	printf("Input three numbers");
	scanf_s("%f %f %f", &a, &b, &c);
	res1 = (a + b + c) / 3;
	res2 = (a * a + b * b + c * c) / 3;
	res3 = (abs(a) + abs(b) + abs(c)) / 3;
	res4 = (sqrt(a) + sqrt(b) + sqrt(c)) / 3;
	printf("Simple average:%f\n", res1);
	printf("Squares average:%f\n", res2);
	printf("Modules average:%f\n", res3);
	printf("Roots average:%f", res4);
}