#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 1.������

//int main()
//{
//	//int a = 7 / 2;
//	//int b = 7 % 2;//ȡģ
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	//  "/"----���ŵ����˶���������ʱ��ִ�еĶ��������������������ֻҪ��һ������������ִ�и������ĳ���
//	float a = 7 / 2.0;
//	int b = 7 % 2;//ȡģ
//	// ȡģ������������������ֻ��������
//	printf("%.2f\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

// 2.��λ������(>> <<)���������漰�����Ƶ����㣬�ź��潲��

// 3.λ������

// 4.��ֵ������

//int main()
//{
//	int a = 0;//��ʼ��
//	a = 20;//��ֵ
//
//	a = a + 3;//a=23
//	a += 3;
//
//	return 0;
//}

// 5.��Ŀ������--ֻ��һ���������Ĳ�����
// C������
// 0��ʾ��
// ��0��ʾ��

//int main()
//{
//	//int flag = 0;
//	//if (!flag)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	//sizeof�ǲ��������ǵ�Ŀ������
//	//int a = 10;
//	//printf("%d\n", sizeof(a));//  4
//
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof(int));
//
//	//int arr[10] = { 0 };
//
//	//printf("%d\n", sizeof(arr));//40 ���������������Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(arr[0]));//4
//	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10-�����Ԫ�ظ���
//
//	//int a = 10;
//	//int b = a++; //����++����ʹ�ã���++
//	//int b = a; a=a+1
//
//	//int b = ++a; //ǰ��++����++����ʹ��
//	//a=a+1;b=a
//
//	//int a = 10;
//	////int b = a--;
//	//int b = --a;
//
//	//printf("%d\n", b); //9
//	//printf("%d\n", a); //9
//
//	//int a = (int)3.14;
//	//printf("%d\n", a);
//	//3.14--���渡������������Ĭ�����Ϊdouble����
//
//	return 0;
//}
//

//// 6.��ϵ������
//int main()
//{
//
//
//	return 0;
//}


// 7.1ָ��
// �ڴ�Ữ��Ϊһ�������ڴ浥Ԫ��һ���ֽڣ���ÿһ���ڴ浥Ԫ����һ�����
//int main()
//{
//	int a = 10;//���ڴ�����4���ֽڣ��洢10
//	//&a;//ȡ��ַ������
//	//printf("%p\n",&a);
//	int* p = &a;
//	// p����ָ�����
//	// *˵��p��ָ�����
//	// int˵��pָ��Ķ�����int����
//	* p = 20;//�����ò���������˼����ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����pָ��Ķ���
//	printf("%d\n", a);
//	//char ch = 'w';
//	//char * pc = &ch;
//	return 0;
//}

//// 7.2ָ������Ĵ�С
//int main()
//{
//	//int* p;
//	//char* p2;
//
//	//������ʲô���͵�ָ�룬�����ڴ���ָ�����
//	//ָ�������������ŵ�ַ��
//	//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���ռ�
//	//32λ�����ϵĵ�ַ��32bitλ-4byte������ָ������Ĵ�С��4���ֽ�
//	//64λ�����ϵĵ�ַ��64bitλ-8byte������ָ������Ĵ�С��8���ֽ�
//
//	printf("%zd\n", sizeof(char*));//4
//	printf("%zd\n", sizeof(short*));//4
//	printf("%zd\n", sizeof(int*));//4
//	printf("%zd\n", sizeof(float*));//4
//	printf("%zd\n", sizeof(double*));//4
//	return 0;
//}

// 8.�ṹ��--�ǰ�һЩ��һ���������һ�������

////����һ��ѧ��
//struct Stu
//{
//	//�ṹ��ĳ�Ա
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//->������ �������� �ṹ���ָ�����->��Ա��
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct Stu s = {"zhangsan",20,"nan","15565498756"};
//
//	// .������----�ṹ�����.��Ա��
//	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}

//define���ǹؼ��֣���Ԥ����ָ��

//�����������


int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//����
	int m = a / b;
	int n = a % b;
	//���
	printf("%d %d\n", m, n);
	return 0;
}