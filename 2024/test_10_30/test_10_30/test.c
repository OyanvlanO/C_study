#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//
// char-也是属于整型家族的一员，因为字符存储的时候，存储的是ASCII码值
// 
// 
// 1.写代码将三个整数按从大到小输出
//void Swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0; 
//	int c = 0;
//	//输入
//	scanf("%d %d %d", &a, &b, &c);
//	//调整
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	//输出
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

// 2.写一个代码打印1~100之间所有3的倍数的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

// 3.给定两个数，求这两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int n = 0;
//	scanf("%d %d", &a, &b);
//	n = (a < b) ? a : b;
//	//if (a < b)
//	//{
//	//	n = a;
//	//}
//	//else
//	//{
//	//	n = b;
//	//}
//	for (i = n; i >= 1; i--)
//	{
//		if ((a % i == 0) && (b % i == 0))
//		{
//			printf("最大公约数是%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}


// 辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (1)
//	{
//		if (a % b == 0)
//		{
//			break;
//		}
//		else
//		{
//			c = b;
//			b = a % b;
//			a = c;	
//		}
//	}
//	printf("最大公约数是：%d\n", b);
//	return 0;
//}
// 
// 
// 编写程序数一下1到100的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//判断个位是不是9
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		//判断十位是不是9
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

// 分数求和
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


// 求10个整数中的最大值
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("请输入第%d个数\n", i);
//		scanf("%d", &arr[i - 1]);
//	}
//	int max = arr[0];
//	int n = 0;
//	for (n = 1; n <= 9; n++)
//	{
//		if (max < arr[n])
//			max = arr[n];
//	}
//	printf("%d", max);
//	return 0;
//}

////打印九九乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			ret = i * j;
//			printf("%d*%d=%-2d     ", i, j, ret);
//		}
//		printf("\n");
//	}
//	return 0;
//}

