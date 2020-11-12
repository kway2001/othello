#include <stdio.h>
#include <stdlib.h>
#define N 6
int gameboard[N][N];

int low, col;
/*
int* low;		//행 에 들어갈  숫자를 받을 포인터 
int* col;		//열 에 들어갈 숫자를 받을 포인터 
*/
//흰색 돌을 놓을 위치 입력 받기
void put_white() {
	
	printf("put a new white othello : ");
	scanf("%i %i", &low, &col);
	//gameboard[low][col] = 79;
		
}


//검은 돌을 놓을 위치 입력 받기 
