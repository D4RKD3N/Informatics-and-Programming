#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>

int generateNumber(int n) {
	int num = 0, i = 0;
	int numbers[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	srand(time(0));

	while (n > 0) {
		i = rand() % 10;
		while ((numbers[i] < 0) && (i < 10))
			i++;
		while ((numbers[i] < 0) && (i > -1))
			i--;
		num = num * 10 + numbers[i];
		numbers[i] = -1;
		n--;
	}

	return num;
}

int num_into_arr(int num, int len) {
	int* arr;
	int number;
	arr = malloc(len * sizeof(int));
	int k = len;
	while (k > 0) {
		number = num % 10;
		arr[k - 1] = number;
		num /= 10;
		k--;
	}
	return arr;
}

int main() {
	int n, *r, guess, *guess_arr;
	printf("Length of num (2 to 5):");
	scanf_s("%d", &n);
	printf("Now try to guess the number\n");
	r = num_into_arr(generateNumber(n), n);
	while (1) {
		scanf_s("%d", &guess);
		guess_arr = num_into_arr(guess, n);
		int cows = 0;
		int bulls = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (guess_arr[i] == r[j] && i == j) {
					bulls++;
					if (guess_arr[i] == r[i] && bulls == n) {
						printf("You found the number, congratulations!\n");
						return exit;
					}
				}
				else if (guess_arr[i] == r[j] && i != j) {
					cows++;
				}
			}
		}
		printf("Cows number: %d; Bulls number: %d\n", cows, bulls);
	}
	free(guess_arr);
	free(r);
}