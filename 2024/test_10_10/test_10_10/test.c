#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


// 4.��д���룬��ʾ����ַ��������ƶ������м���
//int main()
//{
//	char arr1[] = "Welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	//int right = sizeof(arr1)/sizeof(arr1[0])-2;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//ͣ��һ��
//		Sleep(1000);
//		//������Ļ
//		system("cls");//system��һ���⺯��������ִ��ϵͳ����
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

// ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼����
// ֻ���������������룬���������ȷ����ʾ��½�ɹ���������ξ�����������˳�����

// �Ƚ�2���ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ��һ���⺯����strcmp
// �������ֵ��0����ʾ2���ַ������

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//�����������ַ�����abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("��¼ʧ��\n");
//		}
//		Sleep(3000);
//		system("cls");
//	}
//	if (i == 3)
//	{
//	    printf("�����������������˳�����\n");
//	}
//	
//	return 0;
//}

// ���鴫�ε�ʱ�򣬴��ݵ���������Ԫ�صġ���ַ��
// 3.43 ��������Ϸʵ��
// ���Բ���һ�������(1~100)
// ������
// �´���
// ��С��
// ֱ���¶ԣ�����

//void menu()
//{
//	printf("############################\n");
//	printf("########  1. play   ########\n");
//	printf("############################\n");
//	printf("############################\n");
//	printf("########  0. exit   ########\n");
//	printf("############################\n");
//}
//
//// 0~RAND_MAX��0~32767��
//void game()
//{
//	int guess = 0;
//	// 1.���������
//	int ret = rand() % 100 + 1;//����������ĺ���
//	// printf("%d\n", ret);
//	// 2.������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//	
//}
//// ָ��
//// int *p = NULL;
//// int a = 0;
////
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//�����ֵ������߼�
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��!\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

// 1.goto ���
// �ػ�����
// 1.��������������1�����ڹػ�
// 2.���������������ȡ���ػ�
//

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬���ĵ��Խ�����60���ػ�����������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


// ����
//int main()
//{
//	//char arr1[20] = { 0 };
//	//char arr2[] = "hello bit";
//
//	//strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//
//	char arr[20] = "hello world";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}

// �Զ��庯��

//int fun(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int res = fun(a, b);
//	printf("%d\n", res);
//	return 0;
//}
//

// �����������ͱ���������

// ��ʽ����
//void fun(int x, int y)
//{
//	int n = 0;
//	n = y;
//	y = x;
//	x = n;
//}

void fun(int *px, int *py)
{
	int z = *px;
	*px = *py;
	*py = z;
}

//
// ��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
// ���βε��޸Ĳ���Ӱ��ʵ��
//
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("����ǰ��a=%d,b=%d\n", a, b);
	// a��b��ʵ��
	fun(&a, &b);
	printf("������a=%d,b=%d\n", a, b);
	return 0;
}

//int main()
//{
//	int a = 0;
//	int* p = &a;
//	a = 20;
//	*p = 30;
//	return 0;
//}