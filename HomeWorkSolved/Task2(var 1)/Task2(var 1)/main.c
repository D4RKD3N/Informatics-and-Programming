#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int num, mode, answer=-1, searching=1, min=0, max=1000;
	char reply;
	setlocale(LC_ALL, "Russian");
	printf("�������� ����� ������(1 - ���� �� �����������, 2 - ���� �����������):");
	scanf_s("%d", &mode);
	if (mode == 1) {
		srand(time(NULL));
		int num = rand() % 1001;
		while (answer != num) {
			printf("��������� �����:");
			scanf_s("%d", &answer);
			if (answer < num)
				printf("��� ������ ������ �����, try again!\n");
			else
				if (answer > num)
					printf("��� ������ ������ �����, try again!\n");
		}
		printf("�����!");
	}
	else {
		printf("������� ����� �� 0 �� 1000\n");
		answer = 500;
		while (searching) {
			printf("���?:%d\n", answer);
			scanf_s("%c", &reply); //scanf_s doesn't work for some reason
			if (reply == '>') {
				min = answer;
				answer += max - answer;
			}
			else {
				if (reply == '<') {
					max = answer;
					answer -= answer - min;
				}
				else {
					printf("�������)");
					searching = 0;
				}
			}
		}
	}
}