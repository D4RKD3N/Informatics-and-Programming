//COPYRIGHT Nikitin Danila

#include <stdio.h>
#include <malloc.h>
#define SIZE 10

int multiply_odd_numbers(int arr[]) {
	int multiply = 1;
	for (int i = 0; i < SIZE; i++) {
		if (i % 2 == 0)
			multiply *= arr[i];
	}
	return multiply;
}
int multiply_odd_indexes(int arr[]) {
	int multiply = 1;
	for (int i = 0; i < SIZE; i++) {
		if (i % 2 != 0)
			multiply *= arr[i];
	}
	return multiply;
}

int reverse_elems_in_massive(int elem1, int elem2, int arr[]) {
	int temp = arr[elem1];
	arr[elem1] = arr[elem2];
	arr[elem2] = temp;
	return arr;
}

int reverse_massive(arr) {

	return 0;
}

int main() {
	int arr[SIZE] = { 0 };
	for (int i = 0; i < SIZE; i++) {
		int elem;
		scanf_s("%d", &elem);

	}
}