#include <stdio.h>
#include <stdlib.h>

#define N 6

extern int gameboard[N][N];
extern int low, col;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int gameboard[N][N] = {		//�迭�� ���� '����' ����  
	{32, 32, 32, 32, 32, 32},
	{32, 32, 32, 32, 32, 32},
	{32, 32, 32, 32, 32, 32},
	{32, 32, 32, 32, 32, 32},
	{32, 32, 32, 32, 32, 32},
	{32, 32, 32, 32, 32, 32},
	};
	
	init_othello();		//������ �ʱ�ȭ 
	
	put_white();		//��� �� ��ǥ �ޱ�  
	while (gameboard[low][col] != 32) {		//�� ĭ�� �ƴϸ� �������� �ݺ�, ���Է¹ޱ� 
		printf("invalid input! (alredy occupied)\n");
		put_white();
	}
	gameboard[low][col] = 79;		//�Էµ� ���� 'O' �ֱ� 
	
	board_othello(); 
	
	return 0;
}
