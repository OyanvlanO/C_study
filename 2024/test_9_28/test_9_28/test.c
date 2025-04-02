#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//	return 0;
//}

//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     Man   \n");
//
//	
//	return 0;
//}

//int main()
//{
//	printf("I lost my cellphone!\n");
//
//	return 0;
//}

//int Dick(int a, int c)
//{
//	int z = 0;
//	z = (-8 + 22) * a - 10 + c / 2;
//	return z;
//
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int M = Dick(n1, n2);
//	printf("%d\n", M);
//	return 0;
//}

//EOF-end of file 文件的结束标志值是-1

#include <string.h>

//int main()
//{
//	char arr[10] = {'a','g','f','\0'};
//	printf("%s\n", arr);
//
//	printf("%d\n", strlen(arr));
//	return 0;
//}


//int max(int x, int y)
//{
//	if (x >= y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//
//
//int main()
//{
//	int a, b;
//	printf("请输入两个数字\n");
//	scanf("%d %d", &a, &b);
//	int n = max(a, b);
//	printf("%d\n", n);
//	return 0;
//}


//int main()
//{
//	int x, y;
//	printf("请输入x值：\n");
//	scanf("%d", &x);
//	if (x > 0)
//		y = -1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = 1;
//	printf("%d\n", y);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int result = 0;
//	for (a = 1; a <= 9; a = a + 1)
//	{
//		for (b = 1; b <= 9; b = b + 1)
//		{
//			if (a >= b)
//			{
//				result = a * b;
//				printf("%d*%d=%-4d", a, b, result);
//			}
//		}
//		printf("\n");
//		printf("\n");
//	}
//
//	return 0;
//
//}

//输入三个整数x,y,z，把这三个数由小到大输出。



//int main()
//{
//	int x, y, z = 0;
//	printf("请输入三个数字：\n");
//	scanf("%d %d %d", &x, &y, &z);
//	int a, b, c = 0;
//	if (x < y)
//	{
//		if (x < z)
//		{
//			a = x;
//			if (y < z)
//			{
//				b = y;
//				c = z;
//			}
//			else
//			{
//				b = z;
//				c = y;
//			}
//		}
//
//		else
//		{
//			a = z;
//			b = x;
//			c = y;
//		}
//	}
//
//	else
//	{
//		if (y < z)
//		{
//			a = y;
//			if (x > z)
//			{
//				b = z;
//				c = x;
//			}
//			else
//			{
//				b = x;
//				c = z;
//			}
//		}
//		else
//		{
//			a = z;
//			b = y;
//			c = x;
//		}
//		   
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

// 1.关系操作符

//int main()
//{
//	int a = 10;
//	if (a == 3)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

// 2.逻辑操作符
//int main()
//{
//	//&& 逻辑与 - 并且
//	//|| 逻辑或 - 或者
//	int a = 0;
//	int b = 10;
//	if (a || b)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

// 3.条件操作符(三目操作符)

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r = (a > b ? a : b);
//
//	return 0;
//}

// 4.逗号表达式---就是逗号隔开的一串表达式
// 逗号表达式的特点是从左向右依次计算。整个表达式的结果是最后一个表达式的结果。

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);// 输出为5
//	printf("%d\n", d);
//	return 0;
//}


// 5.常见关键字
