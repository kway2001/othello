#include <stdio.h>
#include <stdlib.h>
#define N 6
int gameboard[N][N];

int low, col;
/*
int* low;		//�� �� ��  ���ڸ� ���� ������ 
int* col;		//�� �� �� ���ڸ� ���� ������ 
*/
//��� ���� ���� ��ġ �Է� �ޱ�
void put_white() {
	
	printf("put a new white othello : ");
	scanf("%i %i", &low, &col);
	//gameboard[low][col] = 79;
		
}


//���� ���� ���� ��ġ �Է� �ޱ� 
