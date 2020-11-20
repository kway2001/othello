#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 6
int gameboard[N][N];

//돌을 둘 곳이 있는지 확인 
int available_input() {		// 빈 칸이 있는지 확인 
	int i, j;
	int full=0; 
	for (i=0; i<=6; i++) {
		for (j=0; j<=6; j++) {
			if (gameboard[i][j] == 32)		//하나라도 빈 칸이 있으면 
				full += 1; 		//0이 아니게 됨 
			else		//빈 칸이 없으면  
				full += 0;		//계속 0 
		}
	} 
	
	if (full != 0) 		//full이 0이 아니면 하나라도 빈 칸이 있다는 뜻
		return true;		//참 출력	
	else
		return false;		//빈칸이 없으면 거짓 출력 
} 

void flipable_white() {		//흰 돌 근처에 뒤집을 검은돌이 있는지 확인 
	
}

void flipable_black() {		//검은 돌 근처에 뒤집을 흰 돌이 있는지 확인 
	
	
}
 

int isGameEnd() {
	if (available_input() == false /* && 뒤집을 돌이 없음*/)	//빈 칸이 거짓이고(없고) 뒤집을 돌이 없으면 참 반환
		return true;
	else
		return false;
	
}
