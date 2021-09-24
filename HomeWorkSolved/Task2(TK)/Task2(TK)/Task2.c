#include <stdio.h>

int main() {
	int p, c=0; //c for count, p for price
	printf("Insert price of witcher's job:");
	scanf_s("%d", &p);
	while (p >= 25) {
		p = p - 25;
		c = c + 1;
	}
	while (p >= 10) {
		p = p - 10;
		c = c + 1;
	}
	while (p >= 5) {
		p = p - 5;
		c = c + 1;
	}
	while (p >= 1) {
		p = p - 1;
		c = c + 1;
	}
	printf("%d", c);
}
