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
//C���Դ�����һ��Ҫ��main����
//������
//��׼������д��
// int-�������� 0������
// "hehe\n"�ַ���

//printf��һ���⺯��
//ר��������ӡ���ݵ�

//std-��׼   i-input o-output
//main�����ǳ������� ������������ֻ��һ��


// 3.��������
// char�����ַ���������  short����������  int��������  long����������  long long��������������
// float���������ȸ�����  double����˫���ȸ�����
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

// bit-����λ
// byte-�ֽ�
// kb
// ���������������


//int main()
//{
//	int age=20;
//	double price = 66.6;
//
//	return 0;
//}

// �����볣��
//int main()
//{
//	short age = 20;//����
//	int high = 180;//���
//	float weight = 88.5;//����
//
//	return 0;
//}
// ������Ϊ�ֲ�������ȫ�ֱ���


// ������ʹ��

//int main()
//{
//	int num1 = 0;
//	int num2 = 0; // ��ʼ��
//
//	// ����2������
//	scanf("%d %d", &num1, &num2);
//	// ���
//	int sum = num1 + num2;
//	// ���
//	printf("%d\n", sum);
//
//	return 0;
//}



//������������
// 1.�ֲ�����
// �ֲ��������������Ǳ������ڵľֲ���Χ
// 
// 2.ȫ�ֱ���
// ȫ�ֱ���������������������
// 
// �������ʹ�ã����ﲻ��ʹ��
// ��������������
// �ֲ�����:�����������������ڿ�ʼ�����������������ڽ���
// ȫ�ֱ���������������������ڡ�

//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//	return 0;
//}


////���������ⲿ�ķ���
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



// ����һ�������������������Ľϴ�ֵ  
// ����Ϊ��������a��b  
// ����ֵΪ�ϴ������  
int max(int a, int b)
{
    // ʹ��if-else���Ƚ�a��b�Ĵ�С  
    if (a > b)
    {
        return a; // ���a����b������a  
    }
    else
    {
        return b; // ���򣬷���b  
    }
}


int main() {
    int num1, num2, result;

    // ���û������ȡ��������  
    printf("�����������������ÿո�ָ�: ");
    scanf("%d %d", &num1, &num2);

    // ����max��������ӡ���  
    result = max(num1, num2);
    printf("�ϴ��������: %d\n", result);

    return 0;
}