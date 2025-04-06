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
	printf("------扫雷游戏------\n");
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
	printf("------扫雷游戏------\n");
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
	int win = 0;// 找到非雷的个数
	while (win<row*col - EASY_COUNT)
	{
		printf("请输入要排查的坐标\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '*')
			{
				// 如果是雷
				if (mine[x][y] == '1')
				{
					printf("\n很遗憾，你被炸死了\n\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				// 如果不是雷
				else
				{
					win++;
					// 统计mine数组中（x，y）坐标周围有几个雷
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0'; //转换成数字字符
					DisplayBoard(show, ROW, COL);
				}
			}
			else
			{
				printf("该位置已经被排查过了，请重新输入坐标\n");
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入\n");
		}
		if (win == row * col - EASY_COUNT)
		{
			printf("\n游戏胜利\n");
			DisplayBoard(mine, ROW, COL);
		}
	}
}