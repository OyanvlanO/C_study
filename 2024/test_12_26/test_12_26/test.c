#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

// ɨ��

void menu()
{
	printf("*************************\n");
	printf("*******  1. play  *******\n");
	printf("*******  0. exit  *******\n");
	printf("*************************\n");
}

void game()
{
	// �����������
	char Mine[ROWS][COLS] = { 0 };     // ��Ų��úõ��׵���Ϣ
	char Show[ROWS][COLS] = { 0 };     // ����Ų���׵���Ϣ
	// ��ʼ�����������Ϊָ������
	// Mine ������û�в����׵�ʱ�򣬶��ǡ�0��
	InitBoard(Mine, ROWS, COLS, '0');
	// Show ������û���Ų��׵�ʱ�򣬶��ǡ�*��
	InitBoard(Show, ROWS, COLS, '*');
	// ������
	SetMine(Mine, ROW, COL);
	//DispalyBoard(Mine, ROW, COL);
	DispalyBoard(Show, ROW, COL);
	// �Ų���

}

int main()
{
	// ������������������
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("�Ƿ�Ҫ��ʼ��Ϸ?\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}