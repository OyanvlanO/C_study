#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ϰ��
// 1.ASCII��
//int main()
//{
//	//printf("%c\n", 'a');
//	//printf("%c\n", 97);
//	printf("%c%c%c%c%c%c%c%c%c%c%c%c\n", 73,32,99,97,110,32,100,111,32,105,116,33);
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	// sizeof(arr)-�������������ܴ�С����λ���ֽ�
//	// sizeof(arr[0])-�����������Ԫ�صĴ�С
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//
//	return 0;
//}


// 2.���������������
//int main()
//{
//	// ��������
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//
//	// ���
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//
//	return 0;
//}

// 3.ѧ��������Ϣ���������
//int main()
//{
//	int id = 0;
//	float c = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//	// ����
//	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//	// ���
//	printf("The each subject score of No. %d is %.2f %.2f %.2f.\n", id, c, math, eng);
//
//	return 0;
//}

// 4.printf�ķ���ֵ
//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d\n", n);
//
//	return 0;
//}

// 5.�������

//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	int num4 = 0;
//	int n1 = 0;
//	int n2 = 0;
//	int x = 0;
//	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
//	n1 = max(num1, num2);
//	n2 = max(num3, num4);
//	x = max(n1, n2);
//	printf("%d\n", x);
//	return 0;
//}

//int main()
//{
//	int arr[4] = { 0 };
//	// 0,1,2,3
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int max = 0;
//	scanf("%d", &max);
//	int i = 1;
//	int n = 0;
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		if (n > max)
//		{
//			max = n;
//		}
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}


// ����������
//int main()
//{
//	float r = 0.0f;
//	float v = 0.0f;
//	double �� = 3.1415926;
//	printf("%.7lf\n", ��);
//
//	return 0;
//}

//// ��������ָ��
//int main()
//{
//	float w = 0.0f;
//	float h = 0.0f;
//	scanf("%f %f", &w, &h);
//	float BMI = 0.0f;
//	BMI = (10000*w) / (h * h);
//	printf("%.2f\n", BMI);
//	return 0;
//}


// 3.2 forѭ��
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

// for ѭ���ı���
// forѭ�����жϲ���ʡ����ζ���жϻ�����
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("%d", x);
//
//		printf("hehe\n");
//	}
//	return 0;
//}

// 3.3 do-whileѭ��
// ����n�Ľ׳�
//int main()
//{
//    int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int m = 1;
//	for (i = 1; i <= n; i++)
//	{
//		m = i * m;
//	}
//	printf("%d\n", m);
//	return 0;
//}

// ����׳˵ļӷ�
//int main()
//{
//	int i = 0;
//	int m = 1;
//	int ret = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		m = i * m;
//		ret = m + ret;
//	}
//	printf("%d\n", m);
//	printf("%d\n", ret);
//
//	return 0;
//
//}


//��һ�����������в��Ҿ����ĳ������n
//int main()
//{
//	int arr[] = { 1,2,3,4,6,8,9,10,11,13 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 0;
//
//	scanf("%d", &n);
//	int left = 0;
//	int right = sz - 1 ;
//	int mid = 0;
//	while(left<=right)
//	{
//		mid = (left + right) / 2;
//      mid = left + (right-left)/2;
//		if (n > arr[mid])
//			left = mid + 1;
//		else if (n < arr[mid])
//			right = mid - 1;
//		else
//		{
//			printf("�ҵ��ˣ���������±���%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//		printf("�Ҳ�����\n");
//
//	return 0;
//}

