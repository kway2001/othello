#include <stdio.h>
#include <stdlib.h>
#define N 6
int gameboard[N][N];


void horizontal_line() {		//가로선 출력  
	printf(" -------------\n");
}

void board_othello() {		//보드판 구현  
	int i, j;
	printf(" 0 1 2 3 4 5\n");
	horizontal_line();
	for (i=0; i<=5; i++) {
		printf("%d|", i);
		for (j=0; j<=5; j++) {
			printf("%c|", gameboard[i][j]);
		}
		printf("\n");
		horizontal_line();
	}
}

void init_othello() {		//보드판 초기화  
	gameboard[2][2] = 79;
	gameboard[2][3] = 88;
	gameboard[3][2] = 88;
	gameboard[3][3] = 79;
	board_othello();
}
