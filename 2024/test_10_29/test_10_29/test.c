#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//// 1.��ŵ������
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
//	printf("���Ĳ���     ��������Ĵ���\n");
//	for (disp = 1; disp <= 10; disp++)
//	{
//		int ret = Fai(disp);
//		printf("%-12d %d\n", disp, ret);
//	}
//	return 0;
//}

// ������̨�׵�����

//int Frog(int n, int* p)
//{
//    if (n == 3)
//    {
//        (*p)++;  // ͳ�� Frog(3) �ĵ��ô���
//    }
//
//    if (n == 1)
//    {  // ��һ��̨��
//        return 1;
//    }
//    else if (n == 2)
//    {  // ������̨��
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
//	printf("������̨�׵Ľ���\n");
//	scanf("%d", &step);
//	int ret = Frog(step, &count);
//	printf("������%d��̨�׹���%d�ֿ���\n", step, ret);
//	printf("����Ĵ���Ϊ:%d", count);
//	return 0;
//}

//int main()
//{
//    int step = 0;
//    printf("������̨�׵Ľ���: ");
//    if (scanf("%d", &step) != 1 || step <= 0) {
//        printf("������һ����Ч����������\n");
//        return 1;  // ����1��ʾ��������
//    }
//
//    // ���������ȷ�������ִ��
//    printf("������ȷ��\n");
//    return 0; // ����0��ʾ������������
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