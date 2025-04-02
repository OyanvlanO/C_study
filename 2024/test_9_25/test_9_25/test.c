#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1.字面常量
// 2.const修饰的常变量
// 
// 3.define 定义的标识符常量
// 4.枚举常量



//int main()
//{
//	//30;
//	//3.14;
//	//'w';//字符
//	//"abc";//字符串常量
//	//const int a = 10;//在C语言中，const修饰的a，本质是变量，但是不能直接修改，有常量的属性。
//	//a = 20;
//	//printf("a=%d\n", a);
//
//
//	return 0;
//}


//#define MAX 100
//#define STR "abcdef"
//
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("a=%d\n", a);
//	printf("STR=%s\n", STR);
//	return 0;
//}


//// 枚举常量
//enum Color
//{
//	//枚举常量
//	RED,
//	GREEN,
//	BLUE
//};
//
//
//int main()
//{
//	//三原色
//	//red green blue
//	int num = 10;
//	enum Color c = RED;
//	return 0;
//}

// 字符串


#include <string.h>

//
//int main()
//{
//	//char 字符类型
//	//char ch = 'w';
//
//	//C语言中有没有字符串类型呢？——没有
//	char arr1[] = "abcdef";// 7个字符，有一个/0，它是字符串的结束标志；在计算字符串长度的时候\0是结束标志，不算作字符串的内容。
//	char arr2[] = { 'a','b','c','d','e','f',"\0"};// 6个字符
//
//	printf("%d\n", strlen(arr1));
//
//	printf("%d\n", strlen(arr2));
//
//	//int len = strlen("abc"); // 求字符串长度的一个函数， string length 头文件是 string.h
//
//	//printf("%d\n", len);
//	//printf("%s\n",arr1);
//	//printf("%s\n",arr2);
//
//	return 0;
//}




// 4.2 转义字符


//int main()
//{
//	printf("abc\n");
//	return 0;
//}

//int main()
//{
//	printf("abc\0def");
//	return 0;
//}


//转义字符

//%d--打印整形
//%c--打印字符
//%s--打印字符串
//%f--打印float类型的数据
//%lf--打印double类型的数据
//%zu--打印sizeof的返回值

//int main()
//{
//
//	//printf("%c\n", '\'');
//	//printf("\a");
//
//	//printf("abc\ndef");
//
//	//printf("%c\n", '\130');
//	//printf("%c\n", '\x63');
//
//	//printf("%d\n", strlen("qwer t"));
//
//	//printf("%d\n", strlen("c:\test\628\test.c"));
//
//
//
//	return 0;
//}


/*C语言的注释风格
//注释
int main()
{
	 
	int a = 10;
	int b = 20;
	

	//创建指针变量p，并赋值为空指针NULL
	int* p = NULL;


	return 0;
}
*/

// --------是C++的注释风格



// 5.选择语句

//int main()
//{
//	int input;
//
//	printf("加入比特\n");
//
//	printf("要好好学习嘛(1/0)？\n");
//
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("好offer\n");
//
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//
//	return 0;
//
//}


//////循环语句
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line<19000)
//	{
//		printf("写代码:%d\n",line);
//
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("恭喜你无敌了\n");
//	}
//	else
//	{
//		printf("小乐色\n");
//	}
//	return 0;
//}
//

//  函数

//int add(int x,int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int n1, n2;
//	printf("输入两个值\n");
//
//	scanf("%d" "%d", &n1, &n2);
//
//	int n = add(n1, n2);
//
//	printf("%d\n", n);
//
//	return 0;
//}


//数组----一组相同类型元素的集合

int main()
{
	int arr[10] = { 1,2,3,4,5,7,6,8,9,0};
	//printf("%d\n", arr[8]);
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i=i+1;
	}
	return 0;
}