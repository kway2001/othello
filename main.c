#include <stdio.h>
#include <stdlib.h>

#define N 6

extern int gameboard[N][N];
extern int low, col;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int gameboard[N][N] = {		//배열에 문자 '공백' 넣음  
	{32, 32, 32, 32, 32, 32},
	{32, 32, 32, 32, 32, 32},
	{32, 32, 32, 32, 32, 32},
	{32, 32, 32, 32, 32, 32},
	{32, 32, 32, 32, 32, 32},
	{32, 32, 32, 32, 32, 32},
	};
	
	init_othello();		//보드판 초기화 
	
	put_white();		//흰색 돌 좌표 받기  
	while (gameboard[low][col] != 32) {		//빈 칸이 아니면 오류문구 반복, 재입력받기 
		printf("invalid input! (alredy occupied)\n");
		put_white();
	}
	gameboard[low][col] = 79;		//입력된 곳에 'O' 넣기 
	
	board_othello(); 
	
	return 0;
}
