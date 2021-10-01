#include <stdio.h>

int main() {
	int isWork = 1;
	while(isWork) {
		int num, mode, answer=0;
		int isError = 0;
		printf("Program to inverse numbers. Input 0 to exit\n");
		do {
			if (isError) printf("Wrong input\n");
			printf("Input positive number:");
			scanf_s("%d", &num);
			if (num == 0) {
				isWork = 0;
				break;
			}
			printf("choose mode 1 to inverse or 2 to calculate sum of the numbers:");
			scanf_s("%d", &mode);
			isError = (num < 0 || mode > 2 || mode < 1);
		} while (num < 0);

		if (isWork == 0) continue;

		if (mode == 1) {
			while (num) {
				answer = answer * 10 + num % 10;
				num /= 10;
			}
		}
		else {
			while (num) {
				answer += num % 10;
				num /= 10;
			}
		}
		printf("Result: %d\n", answer);
	}
	printf("Goodbye");
}