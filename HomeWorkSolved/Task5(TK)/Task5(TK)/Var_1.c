#include <stdio.h>

void Reverse(int arr[], int n)
{
	for (int low = 0, high = n - 1; low < high; low++, high--)
	{
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
	}
}

void Shift(int* arr, int  ofset, int  sizeArray)
{
	Reverse(arr, ofset);
	Reverse(&arr[ofset], sizeArray - ofset);
	Reverse(arr, sizeArray);
}

int main() {
	int n, a, k, i;
	scanf_s("%d %d %d", &n, &a, &k);
	int* arr = malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) {
		arr[i] = rand() % (a + a + 1) - a;
	}
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	Shift(arr, n - k, n);
	Reverse(arr, n);
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}