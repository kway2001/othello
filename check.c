#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 6
extern int gameboard[N][N];
extern int low, col;

//���� �� ���� �ִ��� Ȯ�� 
int available_input() {		// �� ĭ�� �ִ��� Ȯ��, �� ĭ�� ������ �� ��� 
	int i, j;
	int blank=0; 
	for (i=0; i<=6; i++) {
		for (j=0; j<=6; j++) {
			if (gameboard[i][j] == 32)		//�ϳ��� �� ĭ�� ������ 
				blank += 1; 		//0�� �ƴϰ� �� 
			//�� ĭ�� ������ ��� 0 
		}
	} 
	
	if (blank != 0) 		//full�� 0�� �ƴϸ� �ϳ��� �� ĭ�� �ִٴ� ��
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
