#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1.���泣��
// 2.const���εĳ�����
// 
// 3.define ����ı�ʶ������
// 4.ö�ٳ���



//int main()
//{
//	//30;
//	//3.14;
//	//'w';//�ַ�
//	//"abc";//�ַ�������
//	//const int a = 10;//��C�����У�const���ε�a�������Ǳ��������ǲ���ֱ���޸ģ��г��������ԡ�
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


//// ö�ٳ���
//enum Color
//{
//	//ö�ٳ���
//	RED,
//	GREEN,
//	BLUE
//};
//
//
//int main()
//{
//	//��ԭɫ
//	//red green blue
//	int num = 10;
//	enum Color c = RED;
//	return 0;
//}

// �ַ���


#include <string.h>

//
//int main()
//{
//	//char �ַ�����
//	//char ch = 'w';
//
//	//C��������û���ַ��������أ�����û��
//	char arr1[] = "abcdef";// 7���ַ�����һ��/0�������ַ����Ľ�����־���ڼ����ַ������ȵ�ʱ��\0�ǽ�����־���������ַ��������ݡ�
//	char arr2[] = { 'a','b','c','d','e','f',"\0"};// 6���ַ�
//
//	printf("%d\n", strlen(arr1));
//
//	printf("%d\n", strlen(arr2));
//
//	//int len = strlen("abc"); // ���ַ������ȵ�һ�������� string length ͷ�ļ��� string.h
//
//	//printf("%d\n", len);
//	//printf("%s\n",arr1);
//	//printf("%s\n",arr2);
//
//	return 0;
//}




// 4.2 ת���ַ�


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


//ת���ַ�

//%d--��ӡ����
//%c--��ӡ�ַ�
//%s--��ӡ�ַ���
//%f--��ӡfloat���͵�����
//%lf--��ӡdouble���͵�����
//%zu--��ӡsizeof�ķ���ֵ

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


/*C���Ե�ע�ͷ��
//ע��
int main()
{
	 
	int a = 10;
	int b = 20;
	

	//����ָ�����p������ֵΪ��ָ��NULL
	int* p = NULL;


	return 0;
}
*/

// --------��C++��ע�ͷ��



// 5.ѡ�����

//int main()
//{
//	int input;
//
//	printf("�������\n");
//
//	printf("Ҫ�ú�ѧϰ��(1/0)��\n");
//
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("��offer\n");
//
//	}
//	else
//	{
//		printf("������\n");
//	}
//
//	return 0;
//
//}


//////ѭ�����
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line<19000)
//	{
//		printf("д����:%d\n",line);
//
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("��ϲ���޵���\n");
//	}
//	else
//	{
//		printf("С��ɫ\n");
//	}
//	return 0;
//}
//

//  ����

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
//	printf("��������ֵ\n");
//
//	scanf("%d" "%d", &n1, &n2);
//
//	int n = add(n1, n2);
//
//	printf("%d\n", n);
//
//	return 0;
//}


//����----һ����ͬ����Ԫ�صļ���

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