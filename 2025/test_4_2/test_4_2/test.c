#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("**********************************\n");
	printf("**********   1. play    **********\n");
	printf("**********************************\n");
	printf("**********   0. exit    **********\n");
	printf("**********************************\n");
}

void game()
{ 
	char mine[ROWS][COLS] = { 0 };   // 存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };   // 存放排查出的雷的信息
	// 初始化数组的内容为指定的内容
	// mine 数组在没有布置雷的时候，都是‘0’
	InitBoard(mine, ROWS, COLS, '0');

	// show 数组在没有排查雷的时候，都是‘*’
	InitBoard(show, ROWS, COLS, '*');

	// 设置雷
	SetMine(mine, ROW, COL);

	// 打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	// 排查雷
	FindMine(mine, show, ROW, COL);

}

int main()
{
	int input = 0;
	// 设置随机数的生成起点
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("是否开始游戏:>");
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
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}


// 进一步的功能
// 1.实现标记地雷
// 2.实现展开一片
// 2.1 该坐标是不是雷
// 2.2 该坐标周围没有雷
// 2.3 该坐标没有被排查过

