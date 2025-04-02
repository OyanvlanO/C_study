#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

// 扫雷

void menu()
{
	printf("*************************\n");
	printf("*******  1. play  *******\n");
	printf("*******  0. exit  *******\n");
	printf("*************************\n");
}

void game()
{
	// 建立最初棋盘
	char Mine[ROWS][COLS] = { 0 };     // 存放布置好地雷的信息
	char Show[ROWS][COLS] = { 0 };     // 存放排查地雷的信息
	// 初始化数组的内容为指定内容
	// Mine 数组在没有布置雷的时候，都是‘0’
	InitBoard(Mine, ROWS, COLS, '0');
	// Show 数组在没有排查雷的时候，都是‘*’
	InitBoard(Show, ROWS, COLS, '*');
	// 设置雷
	SetMine(Mine, ROW, COL);
	//DispalyBoard(Mine, ROW, COL);
	DispalyBoard(Show, ROW, COL);
	// 排查雷

}

int main()
{
	// 设置随机数的生成起点
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("是否要开始游戏?\n");
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
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}