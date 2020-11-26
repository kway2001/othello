#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 6
extern int gameboard[N][N];
extern int number_white();
extern int number_black();
extern int low, col;

void horizontal_line() {		//가로선 출력  
	printf(" -------------\n");
}

void board_othello() {		//보드판 구현  
	int i, j;
	printf("  0 1 2 3 4 5\n");
	horizontal_line();
	for (i=0; i<=5; i++) {
		printf("%d|", i);
		for (j=0; j<=5; j++) {
			printf("%c|", gameboard[i][j]);
		}
		printf("\n");
		horizontal_line();
	}
	printf("STATUS - WHITE : %d BLACK : %d\n", number_white(), number_black()); 	//현재 돌 개수 출력 
}

void init_othello() {		//보드판 초기화  
	gameboard[2][2] = 79;
	gameboard[2][3] = 88;
	gameboard[3][2] = 88;
	gameboard[3][3] = 79;
}
