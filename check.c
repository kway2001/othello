#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 6
int gameboard[N][N];

//���� �� ���� �ִ��� Ȯ�� 
int available_input() {		// �� ĭ�� �ִ��� Ȯ�� 
	int i, j;
	int full=0; 
	for (i=0; i<=6; i++) {
		for (j=0; j<=6; j++) {
			if (gameboard[i][j] == 32)		//�ϳ��� �� ĭ�� ������ 
				full += 1; 		//0�� �ƴϰ� �� 
			else		//�� ĭ�� ������  
				full += 0;		//��� 0 
		}
	} 
	
	if (full != 0) 		//full�� 0�� �ƴϸ� �ϳ��� �� ĭ�� �ִٴ� ��
		return true;		//�� ���	
	else
		return false;		//��ĭ�� ������ ���� ��� 
} 

void flipable_white() {		//�� �� ��ó�� ������ �������� �ִ��� Ȯ�� 
	
}

void flipable_black() {		//���� �� ��ó�� ������ �� ���� �ִ��� Ȯ�� 
	
	
}
 

int isGameEnd() {
	if (available_input() == false /* && ������ ���� ����*/)	//�� ĭ�� �����̰�(����) ������ ���� ������ �� ��ȯ
		return true;
	else
		return false;
	
}
