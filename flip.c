#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 6
extern int gameboard[N][N];
extern int low, col;


//선택 좌표의 오른쪽 east에 상대 돌이 있는지 확인 
int check_east() {
	if (col != 5		//맨 오른쪽칸이 아니면
		&& gameboard[low][col+1] != 32 && gameboard[low][col+1] != gameboard[low][col]) {	//그리고 오른쪽 돌이 다른 색 돌이면
		 
		return true;		//오른쪽에 상대 돌 있으면 참
	}
	else
		return false;		//없으면 거짓 
}

