#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 6
extern int gameboard[N][N];
extern int low, col;


//흰색 돌을 놓을 위치 입력 받기
void put_white() {	
	printf("put a new white othello : ");
	scanf("%i %i", &low, &col);		
}


//검은 돌을 놓을 위치 입력 받기 
void put_black() {
	printf("put a new black othello : ");
	scanf("%i %i", &low, &col);
}
