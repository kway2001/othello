#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 6
extern int gameboard[N][N];
extern int low, col;


//��� ���� ���� ��ġ �Է� �ޱ�
void put_white() {	
	printf("put a new white othello : ");
	scanf("%i %i", &low, &col);		
}


//���� ���� ���� ��ġ �Է� �ޱ� 
void put_black() {
	printf("put a new black othello : ");
	scanf("%i %i", &low, &col);
}
