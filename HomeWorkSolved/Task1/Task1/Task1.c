#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	char f='p';
	char pieces[19] = "";
	int x1, y1, x2, y2, p = 0, r = 0, b = 0, n = 0, q = 0, k = 0;
	printf("Name of piece (First letter):");
	scanf("%s", &f);
	printf("Insert coordinates of cells (please turn letters into numbers):");
	scanf("%d, %d, %d, %d", &x1, &y1, &x2, &y2);
	if (y1 == 2) {
		if (x1 == x2 && y2 - y1 < 3) {
			p = 1;
			strcat(pieces, " p ");
		}
	}
	else
		if (x1 == x2 && y2 - y1 < 2) {
			p = 1;
			strcat(pieces, " p ");
		}
	if (x1 == x2 || y1 == y2) {
		r = 1;
		strcat(pieces, " r ");
	}
	if (abs(x2 - x1) == abs(y2 - y1)) {
		b = 1;
		strcat(pieces, " b ");
	}
	if ((abs(x2 - x1) == 2 && abs(y2 - y1) == 1) || (abs(x2 - x1) == 1 && abs(y2 - y1) == 2)) {
		n = 1;
		strcat(pieces, " n ");
	}
	if ((x1 == x2 || y1 == y2) || (abs(x2 - x1) == abs(y2 - y1))) {
		q = 1;
		strcat(pieces, " q ");
	}
	if (((x1 == x2 || y1 == y2) || (abs(x2 - x1) == abs(y2 - y1))) && abs(x2 - x1) < 2 && abs(y2 - y1) < 2) {
		k = 1;
		strcat(pieces, " k ");
	}
	if (f == 'p') {
		if (p == 1) {
			printf("YES");
			exit(0);
		}
		else {
			printf("NO, but this pieces can: %s", pieces);
			exit(0);
		}
	}
	else {
		if (f == 'r') {
			if (r == 1) {
				printf("YES");
				exit(0);
			}
			else {
				printf("NO, but this pieces can: %s", pieces);
				exit(0);
			}
		}
		else {
			if (f == 'b') {
				if (b == 1) {
					printf("YES");
					exit(0);
				}
				else {
					printf("NO, but this pieces can: %s", pieces);
					exit(0);
				}
			}
			else {
				if (f == 'n') {
					if (n == 1) {
						printf("YES");
						exit(0);
					}
					else {
						printf("NO, but this pieces can: %s", pieces);
						exit(0);
					}
				}
				else {
					if (f == 'q') {
						if (q == 1) {
							printf("YES");
							exit(0);
						}
						else {
							printf("NO, but this pieces can: %s", pieces);
							exit(0);
						}
					}
					else {
						if (f == 'k') {
							if (k == 1) {
								printf("YES");
								exit(0);
							}
							else {
								printf("NO, but this pieces can: %s", pieces);
								exit(0);
							}
						}
					}
				}
			}
		}
	}
}
