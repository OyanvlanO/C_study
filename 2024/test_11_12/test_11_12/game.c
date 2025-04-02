#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

// 第一个版本
//void DispalyBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		// 打印数据
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		// 打印分割行
//		if (i < row - 1)
//		{
//			printf("---|---|---\n");
//		}
//	}
//}

void DispalyBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		// 打印数据
		// printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		// 打印分割行
		if (i < row - 1)
		{
			int j = 0;
			//printf("---|---|---\n");
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋:>\n");
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		//坐标范围判断
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该处坐标已被占用，请选择其他位置\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入!\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋:>\n");
	int x = 0;
	int y = 0;
	int ret = 0;
	// 1.检查自己是否会获胜
	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
		{
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				ret = Iswin(board, ROW, COL);
				if (ret == '#')
				{
					return;
				}
				board[x][y] = ' ';
			}
		}
	}
	// 2.检查玩家是否会获胜
	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
		{
			if (board[x][y] == ' ')
			{
				board[x][y] = '*';
				ret = Iswin(board, ROW, COL);
				if (ret == '*')
				{
					board[x][y] = '#';
					return;
				}
				board[x][y] = ' ';
			}
		}
	}
	while (1)
	{
		x = rand() % 3;
		y = rand() % 3;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}	
}

// 输出0--棋盘未满
// 输出1--棋盘满了
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char Iswin(char board[ROW][COL], int row, int col)
{
	// 行
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == ' ')
		{
			continue;
		}
		for (j = 1; j < col; j++)
		{
			if (board[i][0] != board[i][j])
			{
				break;
			}
		}
		if (j == col)
		{
			return board[i][0];
		}
	}
	// 列
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == ' ')
		{
			continue;
		}
		for (i = 1; i < row; i++)
		{
			if (board[0][j] != board[i][j])
			{
				break;
			}
		}
		if (i == row)
		{
			return board[0][j];
		}
	}
	// 对角线
	if (board[0][0] != ' ')
	{
		for (i = 1; i < row; i++)
		{
			if (board[0][0] != board[i][i])
			{
				break;
			}
		}
		if (i == row)
		{
			return board[0][0];
		}
	}
	if (board[row-1][0] != ' ')
	{
		for (i = 1; i < col; i++)
		{
			if (board[row-1][0] != board[row-1-i][i])
			{
				break;
			}
		}
		if (i == col)
		{
			return board[row-1][0];
		}
	}
	// 是否平局
	if (IsFull(board, row, col))
	{
		return 'Q';
	}

	// 游戏继续
	return 'C';
}