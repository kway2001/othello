#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 6
extern int gameboard[N][N];

//�� �� ���� ����
int number_white() {
	int i, j;
	int sum = 0;
	for (i=0; i<=5; i++) {
		for (j=0; j<=5; j++) {
			if (gameboard[i][j] == 79)
				sum++;
		}
	}
	return sum;
}

//���� �� ���� ����
int number_black() {
	int i, j;
	int sum = 0;
	for (i=0; i<=5; i++) {
		for (j=0; j<=5; j++) {
			if (gameboard[i][j] == 88)
				sum++;
		}
	}
	return sum;
}
