#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


// 4.编写代码，演示多个字符从两端移动，向中间汇聚
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
//		//停顿一秒
//		Sleep(1000);
//		//清理屏幕
//		system("cls");//system是一个库函数，可以执行系统命令
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

// 编写代码实现，模拟用户登录情景，并且只能登录三次
// 只允许输入三次密码，如果密码正确则提示登陆成功，如果三次均输入错误，则退出程序

// 比较2个字符串是否相等，不能使用==，而应该使用一个库函数：strcmp
// 如果返回值是0，表示2个字符串相等

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//假设密码是字符串：abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("登录失败\n");
//		}
//		Sleep(3000);
//		system("cls");
//	}
//	if (i == 3)
//	{
//	    printf("三次密码均输入错误，退出程序\n");
//	}
//	
//	return 0;
//}

// 数组传参的时候，传递的是数组首元素的【地址】
// 3.43 猜数字游戏实现
// 电脑产生一个随机数(1~100)
// 猜数字
// 猜大了
// 猜小了
// 直到猜对，结束

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
//// 0~RAND_MAX（0~32767）
//void game()
//{
//	int guess = 0;
//	// 1.生成随机数
//	int ret = rand() % 100 + 1;//生成随机数的函数
//	// printf("%d\n", ret);
//	// 2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//	
//}
//// 指针
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字的整个逻辑
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择!\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

// 1.goto 语句
// 关机程序
// 1.电脑运行起来后，1分钟内关机
// 2.如果输入我是猪，就取消关机
//

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，您的电脑将会在60秒后关机，如果你输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


// 函数
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

// 自定义函数

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

// 交换两个整型变量的内容

// 形式参数
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
// 当实参传递给形参的时候，形参是实参的一份临时拷贝
// 对形参的修改不会影响实参
//
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前：a=%d,b=%d\n", a, b);
	// a和b是实参
	fun(&a, &b);
	printf("交换后：a=%d,b=%d\n", a, b);
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