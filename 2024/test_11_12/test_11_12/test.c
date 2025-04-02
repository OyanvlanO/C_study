﻿#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

// 三子棋

void menu()
{
	printf("**********************\n");
	printf("********1. play*******\n");
	printf("**********************\n");
	printf("********0. exit*******\n");
	printf("**********************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	// 初始化棋盘
	Initboard(board, ROW, COL);
	DispalyBoard(board, ROW, COL);
	// 下棋
	while (1)
	{
		PlayerMove(board, ROW, COL);
		// 判断输赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DispalyBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		// 判断输赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DispalyBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
	DispalyBoard(board, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));// 设置随机数的生成起点
	int input = 0;
	do
	{
		menu();// 打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}	
	} while (input);
	return 0;
}