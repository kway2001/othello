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
	
	while (isGameEnd() == 0) {		//���������� �ƴϸ�(�����̸�) ���� ���� ��������: ��ĭ����, �Ѵ� ������ ����  
		board_othello();		//������ ���
		if (�� �� �� ���� ������) {		//�� �� �� ���� �ִ��� Ȯ�� 
		
			put_white();		//�� �� ��ǥ �Է� ���� 
			while (gameboard[low][col] != 32 || �������� ����) {		//��ġ �Ұ����� ĭ�϶�(���� �̹� �ְų�, ������ �� ����) 
				if (gameboard[low][col] != 32)
					printf("invalid input! (already occupied)\n");
				else
					printf("invalid input! (unable to flip)\n");
				put_white();		//�ٽ� �Է¹��� 
			}
			//�迭�� 'O' �ֱ� 
			//�� ������ 
			//�� ����, ������ ���� ���� ���
		}
		printf("white has nowhere to put\n");		//���� �� ���� ���ٰ� ��� 
		
		if (���� �� �� ���� ������) {
			board_othello();
			put_black();	//���� �� ��ǥ �Է� ����
			while(gameboard[low][col] == 32 || �������� ����) {
				if (gameboard[low][col] != 32)
					printf("invalid input! (already occupied)\n");
				else
					printf("invalid input! (unable to flip)\n");
				put_black;
			} 
			//�迭�� 'X' �ֱ�
			//�� ������
			//�� ����, ������ ���� ���� ���
 		}
 		printf("black has nowhere to put\n");		//�������� �� ���� ���ٰ� ��� 
	}
	
	//�������� ���� �� ���� ����, ���� ǥ�� 
	
	
	
	/*
	ptr = &gameboard;
	put_white();		//��� �� ��ǥ �ޱ�  
	while ((ptr+6*low+col) != 32) {		//�� ĭ�� �ƴϸ� �������� �ݺ�, ���Է¹ޱ� 
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
