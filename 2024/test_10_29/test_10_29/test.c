#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//// 1.汉诺塔问题
//
//int Fai(int n)
//{
//	if (n >= 2)
//		return 1 + 2*Fai(n - 1);
//	else
//		return 1;
//}
//
//
//int main()
//{
//	int disp = 0;
//	//scanf("%d", &disp);
//	printf("塔的层数     搬运所需的次数\n");
//	for (disp = 1; disp <= 10; disp++)
//	{
//		int ret = Fai(disp);
//		printf("%-12d %d\n", disp, ret);
//	}
//	return 0;
//}

// 青蛙跳台阶的问题

//int Frog(int n, int* p)
//{
//    if (n == 3)
//    {
//        (*p)++;  // 统计 Frog(3) 的调用次数
//    }
//
//    if (n == 1)
//    {  // 跳一层台阶
//        return 1;
//    }
//    else if (n == 2)
//    {  // 跳两层台阶
//        return 2;
//    }
//    else 
//    {
//        return Frog(n - 1, p) + Frog(n - 2, p);
//    }
//}

//int Frog(int n)
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n = n - 1;
//	}
//	if (n == 1)
//		return a;
//	else if (n == 2)
//		return b;
//	else
//		return c;
//}

//int main()
//{
//	int step = 0;
//	int count = 0;
//	printf("请输入台阶的阶数\n");
//	scanf("%d", &step);
//	int ret = Frog(step, &count);
//	printf("青蛙跳%d阶台阶共有%d种可能\n", step, ret);
//	printf("计算的次数为:%d", count);
//	return 0;
//}

//int main()
//{
//    int step = 0;
//    printf("请输入台阶的阶数: ");
//    if (scanf("%d", &step) != 1 || step <= 0) {
//        printf("请输入一个有效的正整数。\n");
//        return 1;  // 返回1表示输入有误
//    }
//
//    // 如果输入正确，则继续执行
//    printf("输入正确！\n");
//    return 0; // 返回0表示程序正常结束
//}

//void test(int n)
//{
//	if (n < 10000)
//		test(n + 1);
//
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}