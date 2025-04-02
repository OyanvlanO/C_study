#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
// 数组
// 是一组相同类型元素的几何

//int main()
//{
//	//int n = 0;
//	//int char[n];//这种数组是不能初始化的
//	//在C99标准之前，数组的大小必须是常量或者常量表达式
//	// 
//	//在C99之后，数组的大小可以是变量，为了支持变长数组
//
//	//不完全初始化，剩余的元素默认初始化为0
//	int arr[10] = { 1,2,3 };
//
//	return 0;
//}

//// 一维数组的使用
//int main()
//{
//	// []下标引用操作符
//	return 0;
//}

// 二维数组的创建和初始化
// 1 2 3 4
// 2 3 4 5
// 3 4 5 6

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 冒泡排序函数
// 数组传参的时候，形参有两种写法：
// 1.数组
// 2.指针
//

//// 形参是数组的形式
// void bubble_sort(int* arr, int sz)//形参是指针的形式
// void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		// 一次冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tem;
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	// 数组
//	// 把数组的数据排成升序
//	int arr[] = { 9,8,6,7,0,4,3,5,1,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 冒泡排序的算法，对数组进行排序
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

// 数组名是什么
// 数组名确实能表示首元素的地址
// 但是有两个例外
// 1.sizeof(数组名），这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
// 2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//
//int main()
//{
//	int arr[10];
//	printf("%p\n", arr); //arr就是首元素的地址
//	printf("%p\n", arr);
//	printf("-----------------------\n");
//	printf("%p\n", &arr[0]); //首元素的地址
//	printf("%p\n", &arr[0]);
//	printf("-----------------------\n");
//	printf("%p\n", &arr); //数组的地址
//	printf("%p\n", &arr);
//
//
//	//int n = sizeof(arr);
//	//printf("%d\n", n);
//	return 0;
//}


//// 二维数组的数组名的理解
//
//int main()
//{
//	int arr[3][4] = {0};
//	//int sz = sizeof(arr);
//	//printf("%d\n", sz);
//	printf("%d\n", sizeof(arr) / sizeof(arr[0])); //行数
//	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0])); //列数
//	//printf("%p\n",arr); //二维数组的数组名也表示数组首元素的地址，只不过等同于二维数组中第一行（看成一个一维数组）的地址
//	//printf("%p\n", arr+1);
//	return 0;
//}