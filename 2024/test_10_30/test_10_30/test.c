#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//
// char-Ҳ���������ͼ����һԱ����Ϊ�ַ��洢��ʱ�򣬴洢����ASCII��ֵ
// 
// 
// 1.д���뽫�����������Ӵ�С���
//void Swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0; 
//	int c = 0;
//	//����
//	scanf("%d %d %d", &a, &b, &c);
//	//����
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	//���
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

// 2.дһ�������ӡ1~100֮������3�ı���������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

// 3.���������������������������Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int n = 0;
//	scanf("%d %d", &a, &b);
//	n = (a < b) ? a : b;
//	//if (a < b)
//	//{
//	//	n = a;
//	//}
//	//else
//	//{
//	//	n = b;
//	//}
//	for (i = n; i >= 1; i--)
//	{
//		if ((a % i == 0) && (b % i == 0))
//		{
//			printf("���Լ����%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}


// շת�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (1)
//	{
//		if (a % b == 0)
//		{
//			break;
//		}
//		else
//		{
//			c = b;
//			b = a % b;
//			a = c;	
//		}
//	}
//	printf("���Լ���ǣ�%d\n", b);
//	return 0;
//}
// 
// 
// ��д������һ��1��100�����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//�жϸ�λ�ǲ���9
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		//�ж�ʮλ�ǲ���9
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

// �������
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


// ��10�������е����ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("�������%d����\n", i);
//		scanf("%d", &arr[i - 1]);
//	}
//	int max = arr[0];
//	int n = 0;
//	for (n = 1; n <= 9; n++)
//	{
//		if (max < arr[n])
//			max = arr[n];
//	}
//	printf("%d", max);
//	return 0;
//}

////��ӡ�žų˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			ret = i * j;
//			printf("%d*%d=%-2d     ", i, j, ret);
//		}
//		printf("\n");
//	}
//	return 0;
//}

