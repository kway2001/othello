#include <stdio.h>
#include <stdlib.h>
#define N 6
int gameboard[N][N];
int low, col;


//흰색 돌을 놓을 위치 입력 받기
void put_white() {
	
	printf("put a new white othello : ");
	scanf("%i %i", &low, &col);	
		
}


//검은 돌을 놓을 위치 입력 받기 
