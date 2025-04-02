#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1.关键字typedef
//typedef unsigned int unit;
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	unsigned int num = 0;
//	unit num2 = 1;
//	struct Node n;
//	Node n2;
//	return 0;
//}

// 2.关键字static
// 2.1 修饰局部变量
// (1)static修饰局部变量的时候，其实局部变量出了作用域，不销毁。
//    本质上，static修饰局部变量的时候，改变了变量的存储位置的，影响了变量的生命周期，生命周期和程序的生命周期一样。
//void test()
//{
//	static int a = 1;
//    a++;
//	printf("%d ", a);
//}
//
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}
// 
// 
// 2.2 修饰全局变量
// static修饰全局变量的时候，这个全局变量的外部链接属性就变成了内部链接属性，其他源文件（.c）就不能使用到这个全局变量了。
// 声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//// 2.3 修饰函数
// 函数是具有外部链接属性的，但是被static修饰的时候，外部链接属性就变成了内部链接属性，其他源文件（.c）就无法使用了。

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}

// 3.register-寄存器关键字
//int main()
//{
//	//寄存器变量
//	register int num = 3;//建议3存放在寄存器中
//
//	return 0;
//}

// 4.#define定义常量和宏
// define定义标识符常量
//#define NUM 100
//int main()
//{
//	printf("%d\n", NUM);
//	int n = NUM;
//	printf("%d\n", n);
//	int arr[NUM] = { 0 };
//	return 0;
//}

// define定义宏
// 宏是有参数的
//
//#define ADD(x,y) ((x)+(y))
//int main()
//{
//	//printf("%d\n", NUM);
//	//int n = NUM;
//	//printf("%d\n", n);
//	//int arr[NUM] = { 0 };
//	int a = 10;
//	int b = 40;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}
