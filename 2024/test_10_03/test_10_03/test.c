#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1.�ؼ���typedef
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

// 2.�ؼ���static
// 2.1 ���ξֲ�����
// (1)static���ξֲ�������ʱ����ʵ�ֲ��������������򣬲����١�
//    �����ϣ�static���ξֲ�������ʱ�򣬸ı��˱����Ĵ洢λ�õģ�Ӱ���˱������������ڣ��������ںͳ������������һ����
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
// 2.2 ����ȫ�ֱ���
// static����ȫ�ֱ�����ʱ�����ȫ�ֱ������ⲿ�������Ծͱ�����ڲ��������ԣ�����Դ�ļ���.c���Ͳ���ʹ�õ����ȫ�ֱ����ˡ�
// �����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//// 2.3 ���κ���
// �����Ǿ����ⲿ�������Եģ����Ǳ�static���ε�ʱ���ⲿ�������Ծͱ�����ڲ��������ԣ�����Դ�ļ���.c�����޷�ʹ���ˡ�

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

// 3.register-�Ĵ����ؼ���
//int main()
//{
//	//�Ĵ�������
//	register int num = 3;//����3����ڼĴ�����
//
//	return 0;
//}

// 4.#define���峣���ͺ�
// define�����ʶ������
//#define NUM 100
//int main()
//{
//	printf("%d\n", NUM);
//	int n = NUM;
//	printf("%d\n", n);
//	int arr[NUM] = { 0 };
//	return 0;
//}

// define�����
// �����в�����
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
