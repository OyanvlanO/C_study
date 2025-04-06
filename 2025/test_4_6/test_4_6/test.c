#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


// 移位操作符
// << 左移操作符
// >> 右移操作符
//
// 整数的二进制表示有3种
// 原码
// 反码
// 补码
//  
// 

//int main()
//{
//	int a = 7;
//	//
//	// 左移操作符
//	// 移动的是二进制位
//	// 
//	int b = a << 1;
//	
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = -7;
//	//
//	// 左移操作符
//	// 移动的是二进制位
//	// 只支持整数
//	// 
//	int b = a << 1;
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}


//int main()
//{
//	int a = 7;
//	//
//	// 右移操作符
//	// 移动的是二进制位
//	// 只支持整数
//	// 
//	int b = a >> 1;
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

int main()
{
	int a = -7;
	//
	// 右移操作符
	// 移动的是二进制位
	// 只支持整数
	// 
	int b = a >> 1;

	printf("a=%d\n", a);
	printf("b=%d\n", b);

	return 0;
}
