#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 6
extern int gameboard[N][N];
extern int low, col;


//���� ��ǥ�� ������ east�� ��� ���� �ִ��� Ȯ�� 
int check_east() {
	if (col != 5		//�� ������ĭ�� �ƴϸ�
		&& gameboard[low][col+1] != 32 && gameboard[low][col+1] != gameboard[low][col]) {	//�׸��� ������ ���� �ٸ� �� ���̸�
		 
		return true;		//�����ʿ� ��� �� ������ ��
	}
	else
		return false;		//������ ���� 
}

