#include<stdio.h>
#include<stdlib.h>
#define ROW  3
#define COL  3

void show_game(int board[][COL])
{
	system("cls");
	int i, j;
	printf(" ");
	for (i = 0; i < COL; i++)
		printf("%d", i + 1);
	printf("\n");
	for (i = 0; i < ROW; i++)
	{
		printf("%d", i + 1);
		for (j = 0; j < COL; j++)
			if (board[i][j] < 0) // -1: X
				printf("X");
			else if (board[i][j] > 0) // 1: O
				printf("O");
			else
				printf("."); // empty slot
		printf("\n");;
	}
}