#include <stdio.h>
#include <locale.h>
void shift(int i, int N, int arr)
{
	for (; i < N - 1; i++) { arr[i] = arr[i + 1]; }
	N--;
}


int special_randomizer() {
	int nums[10] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};
	nums.splice(2);
}

int main() {
	int l, code;
	setlocale("Russian");
	printf("Это быки и коровы. Надеюсь, что правила вы знаете\n");
	printf("Введите желаемую длину кода от 2 до 5");
	scanf_s("%d", &l);
	
}