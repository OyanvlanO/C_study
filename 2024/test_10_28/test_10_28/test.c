#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include "add.h"
#include "sub.h"

// ���Ե��뾲̬��
//#pragma comment(lib,"test_10_28_sub.lib")
//// ������Բμ���42��
//// �����������붨��
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

// �ݹ�
// �����������ı�̼��ɳ�Ϊ�ݹ�
// �ݹ���Ϊһ���㷨�ڳ�����������й㷺Ӧ�á�һ�����̻������䶨���˵������ֱ�ӻ��ӵ��������һ�ַ�����
// ��ͨ����һ�����͸��ӵ�������ת��Ϊһ����ԭ�������ƹ�ģ��С����������⣬�ݹ����ֻ�������ĳ���Ϳ���
// �����������������Ҫ�Ķ�μ��㣬���ؼ����˳���Ĵ�������
// 

// 1.����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
// %d �Ǵ�ӡ�з��ŵ�������������������
// %u �Ǵ�ӡ�޷��ŵ�����

// �ݹ��������Ҫ������
// 1.���������������������������������ʱ�򣬵ݹ�㲻�ټ���
// 2.ÿ�εݹ���ú�Խ��Խ�ӽ������������

// �ݹ��ʵ��

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

// ��д��������������ʱ���������ַ�������

// ���ַ�������
// ģ��ʵ��strlen
// int my_strlen(char str[])//��������д���������ʽ
//int my_strlen(char* str)// ��������д��ָ�����ʽ
//{
//    int count = 0;// ��������ʱ����
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}

// �ݹ����

//int my_strlen(char* str)// ��������д��ָ�����ʽ
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

// �ݹ������

// ��n�Ľ׳�

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

// 쳲���������
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

