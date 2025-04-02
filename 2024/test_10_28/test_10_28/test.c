#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include "add.h"
#include "sub.h"

// 可以导入静态库
//#pragma comment(lib,"test_10_28_sub.lib")
//// 具体可以参见第42集
//// 函数的声明与定义
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret1 = Add(a, b);
//	printf("%d\n", ret1);
//	int ret2 = Sub(a, b);
//	printf("%d\n", ret2);
//	return 0;
//}

// 递归
// 程序调用自身的编程技巧称为递归
// 递归作为一种算法在程序设计语言中广泛应用。一个过程或函数在其定义或说明中有直接或间接调用自身的一种方法。
// 它通常把一个大型复杂的问题层层转化为一个与原问题相似规模较小的问题来求解，递归策略只需少量的程序就可描
// 述出解题过程中所需要的多次计算，大大地减少了程序的代码量。
// 

// 1.接收一个整形值（无符号），按照顺序打印它的每一位
// %d 是打印有符号的整数（会有正负数）
// %u 是打印无符号的整数

// 递归的两个必要的条件
// 1.存在限制条件，当满足这个限制条件的时候，递归便不再继续
// 2.每次递归调用后越来越接近这个限制条件

// 递归的实现

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%u ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);// 12345
//	print(num);
//}

//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	// 1 2 3 4
//	// [1 2 3 4 5]
//	while (num)
//	{
//		printf("%u ", num % 10);
//		num = num / 10;
//	}
//	return 0;
//}

// 编写函数不允许创建临时变量，求字符串长度

// 求字符串长度
// 模拟实现strlen
// int my_strlen(char str[])//参数部分写成数组的形式
//int my_strlen(char* str)// 参数部分写成指针的形式
//{
//    int count = 0;// 计数，临时变量
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}

// 递归求解

//int my_strlen(char* str)// 参数部分写成指针的形式
//{
//    if (*str != '\0')
//        return 1 + my_strlen(str + 1);
//    else
//        return 0;
//}
//
//int main()
//{
//    char arr[] = "abcdef";//[a b c \0]
//    // char*
//    int len = my_strlen(arr);
//    printf("%d\n", len);
//    return 0;
//}

// 递归与迭代

// 求n的阶乘

//int fac(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//		return x * fac(x - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

// 斐波那契数列
// 1 1 2 3 5 8 13 21 34 55 89 144

//int Fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//		return Fib(x - 1) + Fib(x - 2);
//}


//int Fib(int x)
//{
//	int a = 0;
//	int b = 1;
//	int c = 1;
//	int i = 0;
//	if (x <= 2)
//	{
//		return c;
//	}
//	else
//	{
//		for (i = 1; i <= x - 2; i++)
//		{
//			a = c;
//			c = c + b;
//			b = a;
//		}
//		return c;
//	}
//}

//int Fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

