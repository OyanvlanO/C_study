#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//// 菜单
//void menu()
//{
//	printf("***********************\n");
//	printf("******  1. play  ******\n");
//	printf("***********************\n");
//	printf("******  0. exit  ******\n");
//	printf("***********************\n");
//}
//
//void game()
//{
//	int n = 0;
//	int ran = rand() %100 +1;
//	printf("请猜一个 1 到 100 的数字:>");
//	while (1)
//	{
//		scanf("%d", &n);
//		if (n > ran)
//		{
//			printf("猜大了\n");
//		}
//		else if (n < ran)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	RAND_MAX;
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入你的选择:>");
//		scanf("%d", &input);
//
//		if (input == 1)
//		{
//			game();
//		}
//		else if (input == 0)
//		{
//			printf("退出游戏\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误，请重新选择！\n");
//		}
//	} while (input);
//	return 0;
//}


//int fun(int x)
//{
//	int i = 0;
//	int y1 = 0;
//	int y2 = 1;
//	int z = 1;
//	if (x <= 2)
//	{
//		return z;
//	}
//	else
//	{
//		for (i = 0; i < x - 2; i++)
//		{
//			y1 = z;
//			z = y2 + y1;
//			y2 = y1;
//		}
//		return z;
//	}
//}
//
//int main()
//{
//	int m = 0;
//	//printf("请输入月份:>");
//	//scanf("%d", &m);
//	for (m = 1; m <= 15; m++)
//	{
//		int n = fun(m);
//		printf("第 %d 个月的兔子有 %d 对\n", m, n);
//	}
//
//	return 0;
//}
//
//// 使用递归计算兔子总数
//long long rabbit(int month) {
//    if (month == 1 || month == 2) {
//        return 1; // 前两个月只有一对兔子
//    }
//    else {
//        return rabbit(month - 1) + rabbit(month - 2); // 后续每个月兔子总数
//    }
//}
//
//int main() {
//    int n;
//    printf("请输入月份数: ");
//    scanf("%d", &n);
//
//    printf("第 %d 个月的兔子总数为: %lld\n", n, rabbit(n));
//    return 0;
//}

#include <math.h>
// 写一个函数可以判断一个数是不是素数

//int is_prime(int x)
//{
//	int y = 0;
//	for (y = 2; y <= sqrt(x); y++)
//	{
//		if (x % y == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//		
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


// 打印100~200之间的素数
// 素数是只能被1和他本身整除的数
//7
//1和7整除
// 2 3 4 5 6

//int fun(int x,int y)
//{
//	if (x % y == 0)
//	{
//		return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		//判断
//		for (j = 2; j <= i - 1; j++)
//		{
//			n = fun(i, j);
//			if (n == 0)
//				break;
//		}
//		if (n == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//int fun(int x, int y)
//{
//	if (x % y == 0)
//	{
//		return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		//判断
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			n = fun(i, j);
//			if (n == 0)
//				break;
//		}
//		if (n == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

// 判断一年是不是闰年
// 打印1000~2000年之间的闰年
// 闰年的判断规则
// 1.能被4整除，并且不能被100整除是闰年
// 2.能被400整除是闰年
//
//int main()
//{
//    int year = 0;
//    for (year = 1000; year <= 2000; year++)
//    {
//        if (year % 4 == 0)
//        {
//            if (year % 100 != 0)
//            {
//                printf("%d ", year);
//            }
//        }
//        if (year % 400 == 0)
//        {
//            printf("%d ", year);
//        }
//    }
//    return 0;
//} 

//int is_leap_year(int y)
//{
//    if(((y%4==0)&&(y%100!=0)) || (y%400==0))
//        return 1;
//    else
//        return 0;
//}
//
//int main()
//{
//    int year = 0;
//    for (year = 1000; year <= 2000; year++)
//    {
//        if(is_leap_year(year))
//        {
//            printf("%d ", year);
//        }
//    }
//    return 0;
//}

// 写一个函数，判断一个整型有序数组的二分查找
//int binary_search(int arr[],int k,int sz)//形参arr看上去是数组，实际上是一个指针变量
//{
//    int left = 0;
//    int right = sz - 1;
//
//    while (left<=right)
//    {
//        int mid = left + (right - left) / 2;
//        if (arr[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid] > k)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return -1;
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k = 7;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//    int ret = binary_search(arr, k, sz);
//    //如果找到了，就返回下标
//    //如果找不到，返回-1
//    if (ret == -1)
//    {
//        printf("没找到\n");
//    }
//    else
//        printf("找到了，下标是:%d", ret);
//    return 0;
//}

// 形式参数和实际参数的名字可以相同也可以不同
// 数组传参实际上传递的是数组首元素的地址
// 而不是整个数组
// 所以在函数内部计算一个函数参数部分的数组的元素个数是不靠谱的

// 布尔类型
#include <stdbool.h>
#include <math.h>

//bool is_prime(int n)
//{
//    int j = 0;
//    for (j = 2; j <= sqrt(n); j++)
//    {
//        if (n % j == 0)
//        {
//            return false;
//        }
//    }
//    return true;
//}
//int main()
//{
//    int i = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        if (is_prime(i))
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

//写一个函数，每调用一次这个函数，就会将num的值增加1
//void Add(int* p)
//{
//    (*p)++;
//}
//
//int main()
//{
//    int num = 0;
//    Add(&num);
//    printf("%d\n", num);
//    Add(&num);
//    printf("%d\n", num);
//    Add(&num);
//    printf("%d\n", num);
//    Add(&num);
//    printf("%d\n", num);
//}


//  函数的嵌套调用和链式访问

//int Add(int x, int y)
//{
//	printf("hehe\n");
//}
//// 上面的代码在一些编译器上返回的是函数中执行过程中最后一条指令执行的结果
//
//int main()
//{
//	// int len = strlen("abcdef");
//	// printf("%d", len);
//	//// 链式访问
//	// printf("%d\n", string("abcdef"));
//	// printf的返回值是本次打印的字符个数
//	// 函数不写返回值时，默认返回类型是int
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}
// 
//
// 明确的说明，main函数不需要参数
// 本质上main函数是有参数的
// 
//int main(void)
//{
//
//	return 0;
//}

// main函数有3个参数
//int main(int argc,char* argv[],char *envp[])
//{
//
//	return 0;
//}
