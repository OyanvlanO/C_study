#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//
//int main()
//{
//	printf("hehe\n");
//
//	return 0;
//
//}
//C语言代码中一定要有main函数
//主函数
//标准主函数写法
// int-整型类型 0是整数
// "hehe\n"字符串

//printf是一个库函数
//专门用来打印数据的

//std-标准   i-input o-output
//main函数是程序的入口 必须有且有且只有一个


// 3.数据类型
// char——字符数据类型  short——短整型  int——整形  long——长整形  long long——更长的整形
// float——单精度浮点数  double——双精度浮点数
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}

// bit-比特位
// byte-字节
// kb
// 计算机能理解二进制


//int main()
//{
//	int age=20;
//	double price = 66.6;
//
//	return 0;
//}

// 变量与常量
//int main()
//{
//	short age = 20;//年龄
//	int high = 180;//身高
//	float weight = 88.5;//体重
//
//	return 0;
//}
// 变量分为局部变量和全局变量


// 变量的使用

//int main()
//{
//	int num1 = 0;
//	int num2 = 0; // 初始化
//
//	// 输入2个整数
//	scanf("%d %d", &num1, &num2);
//	// 求和
//	int sum = num1 + num2;
//	// 输出
//	printf("%d\n", sum);
//
//	return 0;
//}



//变量的作用域
// 1.局部变量
// 局部变量的作用域是变量所在的局部范围
// 
// 2.全局变量
// 全局变量的作用域是整个工程
// 
// 哪里可以使用，哪里不能使用
// 变量的生命周期
// 局部变量:进入作用域生命周期开始，出作用域生命周期结束
// 全局变量：整个程序的生命周期。

//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//	return 0;
//}


////声明来自外部的符号
//
//extern int a;
//
//
//void test()
//{
//	printf("test-->%d\n", a);
//}
//
//
//int main()
//{
//	test();
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//	return 0;
//}



// 定义一个函数来求两个整数的较大值  
// 参数为两个整数a和b  
// 返回值为较大的整数  
int max(int a, int b)
{
    // 使用if-else语句比较a和b的大小  
    if (a > b)
    {
        return a; // 如果a大于b，返回a  
    }
    else
    {
        return b; // 否则，返回b  
    }
}


int main() {
    int num1, num2, result;

    // 从用户那里获取两个整数  
    printf("请输入两个整数，用空格分隔: ");
    scanf("%d %d", &num1, &num2);

    // 调用max函数并打印结果  
    result = max(num1, num2);
    printf("较大的整数是: %d\n", result);

    return 0;
}