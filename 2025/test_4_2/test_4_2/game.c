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
	printf("------ɨ����Ϸ------\n");
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
	printf("------ɨ����Ϸ------\n");
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

int get_mine_count(char board[ROWS][COLS],int x ,int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		j = board[x - 1 + i][y - 1] + board[x - 1 + i][y] + board[x - 1 + i][y + 1] - 3 * '0' + j;
	}
	return j;
}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;// �ҵ����׵ĸ���
	while (win<row*col - EASY_COUNT)
	{
		printf("������Ҫ�Ų������\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '*')
			{
				// �������
				if (mine[x][y] == '1')
				{
					printf("\n���ź����㱻ը����\n\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				// ���������
				else
				{
					win++;
					// ͳ��mine�����У�x��y��������Χ�м�����
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0'; //ת���������ַ�
					DisplayBoard(show, ROW, COL);
				}
			}
			else
			{
				printf("��λ���Ѿ����Ų���ˣ���������������\n");
			}
		}
		else
		{
			printf("��������Ƿ�������������\n");
		}
		if (win == row * col - EASY_COUNT)
		{
			printf("\n��Ϸʤ��\n");
			DisplayBoard(mine, ROW, COL);
		}
	}
}