#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

// 1. �ַ������򣨵ݹ�ʵ�֣�
// reverse_string(char* string)
// 

//int main()
//{
//	char arr[] = "abcdefg";
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	//int right = sz - 2;
//	int right = strlen(arr)-1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

// �ݹ鷨

// //��Ȼ�ǵݹ鷨�����ǲ��õ��������ӡ
//void reverse(char *string)
//{
//  	if (*string != '\0')
//	{
//		reverse(string + 1);
//	}
//	printf("%c", *string);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//
//	return 0;
//}


//int My_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = My_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (My_strlen(str+1) >= 2)
//	{
//		reverse(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//
//void reverse(char* str, int left, int right)
//{
//	char tem = str[left];
//	str[left] = str[right];
//	str[right] = tem;
//	left++;
//	right--;
//	if (left < right)
//	{
//		reverse(str, left, right);
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = My_strlen(arr);
//	int left = 0;
//	int right = len - 1;
//	reverse(arr, left, right);
//	printf("%s\n", arr);
//
//	return 0;
//}

// ����ÿһ������ÿλ��֮�ͣ��ݹ�ʵ�֣�
//
//int DigitSum(unsigned int n)
//{
//	if (n / 10 != 0)
//	{
//		return n % 10 + DigitSum(n / 10);;
//	}
//	else 
//	{
//		return n % 10;
//	}
//}
//int main()
//{
//	unsigned int a = 0;
//	scanf("%u", &a);
//	int Num = DigitSum(a);
//	printf("%d\n", Num);
//	return 0;
//}

// ��дһ������ʵ��n��k�η���ʹ�õݹ���ʵ��
//
//double Cifang(int n, int k)
//{
//	if (k > 0)
//	{
//		return Cifang(n, k - 1)*n;
//	}
//	else if( k == 0 )
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0 / Cifang(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double sum = Cifang(n, k); 
//	printf("%lf\n", sum);
//	return 0;
//}

// sizeof
// sizeof��һ��������
// ������������������ͣ���ռ�ռ�Ĵ�С������ע�ڴ��д�ŵľ�������
// ��λ���ֽ�
// 
// strlen
// strlrn��һ���⺯������ר�����ַ������ȵģ�ֻ������ַ��������������
// �Ӳ��������ĵ�ַ���һֱ��\0��ͳ��\0֮ǰ���ֵ��ַ��ĸ���
// 


//// ������A�е����ݺ�����B�е����ݽ��н���������һ����
//void reverse(int arr1[], int arr2[], int n)
//{
//	int tmp = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	reverse(arr1, arr2 , sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void My_printf(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse(arr, sz);
	My_printf(arr, sz);
	printf("\n");
	init(arr, sz);
	My_printf(arr, sz);
	printf("\n");
	return 0;
}
