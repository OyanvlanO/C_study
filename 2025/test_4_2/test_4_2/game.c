#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0; int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set ; //'*'
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0; int j = 0;
	printf("------É¨À×ÓÎÏ·------\n");
	for (j = 0; j < col + 1; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i < row+1; i++)
	{
		printf("%d ", i);
		for (j = 1; j < col+1; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------É¨À×ÓÎÏ·------\n");
}


void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		/*printf("%d %d\n", x, y);*/
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}