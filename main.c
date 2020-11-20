#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
	
	while (isGameEnd() == false) {		//종료조건이 아니면(거짓이면) 게임 시작 종료조건: 빈칸없음, 둘다 놓을곳 없음  
		board_othello();		//보드판 출력
		if (available_input() == true /* && 뒤집을 검은돌이 있으면*/) {		//흰 돌 둘 곳이 있는지 확인 
		
			put_white();		//흰 돌 좌표 입력 받음 
			while (gameboard[low][col] != 32 /* || 뒤집을수 없음*/) {		//배치 불가능한 칸일때(돌이 이미 있거나, 뒤집을 수 없음) 
				if (gameboard[low][col] != 32)
					printf("invalid input! (already occupied)\n");
				else
					printf("invalid input! (unable to flip)\n");
				put_white();		//다시 입력받음 
			}
			gameboard[low][col] = 79; 	//배열에 'O' 넣기 
			//돌 뒤집기 
			//돌 개수, 뒤집은 개수 상태 출력
		}
		printf("white has nowhere to put\n");		//흰돌을 둘 곳이 없다고 출력 
		
		if (available_input() == true /* && 뒤집을 흰 돌이 있으면*/) {		//검은 돌 둘 곳이 있는지 확인 
			board_othello();
			put_black();	//검은 돌 좌표 입력 받음
			while(gameboard[low][col] == 32 /* || 뒤집을수 없음*/) {
				if (gameboard[low][col] != 32)
					printf("invalid input! (already occupied)\n");
				else
					printf("invalid input! (unable to flip)\n");
				put_black;
			} 
			gameboard[low][col] = 88; 	//배열에 'X' 넣기
			//돌 뒤집기
			//돌 개수, 뒤집은 개수 상태 출력
 		}
 		printf("black has nowhere to put\n");		//검은돌을 둘 곳이 없다고 출력 
	}
	
	//종료조건 만족 후 게임 종료, 승자 표시 
	
	
	
	/*
	ptr = &gameboard;
	put_white();		//흰색 돌 좌표 받기  
	while ((ptr+6*low+col) != 32) {		//빈 칸이 아니면 오류문구 반복, 재입력받기 
		printf("invalid input! (alredy occupied)\n");
		put_white();
	}

//	printf("%i %i", plow, pcol);	
//	gameboard[*plow][*pcol] = 79;
	*(ptr + 6*low + col) = 79;
	
	board_othello(); 
*/	
	return 0;
}
