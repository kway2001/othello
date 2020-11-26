#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 6
extern int gameboard[N][N];

//흰 돌 개수 세기
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

//검은 돌 개수 세기
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
