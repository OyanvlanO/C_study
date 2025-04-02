#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 1.操作符

//int main()
//{
//	//int a = 7 / 2;
//	//int b = 7 % 2;//取模
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	//  "/"----除号的两端都是整数的时候，执行的都是整数除法，如果两端只要有一个浮点数，就执行浮点数的除法
//	float a = 7 / 2.0;
//	int b = 7 % 2;//取模
//	// 取模操作符的两个操作符只能是整数
//	printf("%.2f\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

// 2.移位操作符(>> <<)————涉及二进制的运算，放后面讲解

// 3.位操作符

// 4.赋值操作符

//int main()
//{
//	int a = 0;//初始化
//	a = 20;//赋值
//
//	a = a + 3;//a=23
//	a += 3;
//
//	return 0;
//}

// 5.单目操作符--只有一个操作数的操作符
// C语言中
// 0表示假
// 非0表示真

//int main()
//{
//	//int flag = 0;
//	//if (!flag)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	//sizeof是操作符，是单目操作符
//	//int a = 10;
//	//printf("%d\n", sizeof(a));//  4
//
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof(int));
//
//	//int arr[10] = { 0 };
//
//	//printf("%d\n", sizeof(arr));//40 计算的是整个数组的大小，单位是字节
//	//printf("%d\n", sizeof(arr[0]));//4
//	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10-数组的元素个数
//
//	//int a = 10;
//	//int b = a++; //后置++，先使用，后++
//	//int b = a; a=a+1
//
//	//int b = ++a; //前置++，先++，后使用
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
//	//3.14--字面浮点数，编译器默认理解为double类型
//
//	return 0;
//}
//

//// 6.关系操作符
//int main()
//{
//
//
//	return 0;
//}


// 7.1指针
// 内存会划分为一个个的内存单元（一个字节），每一个内存单元都有一个编号
//int main()
//{
//	int a = 10;//向内存申请4个字节，存储10
//	//&a;//取地址操作符
//	//printf("%p\n",&a);
//	int* p = &a;
//	// p就是指针变量
//	// *说明p是指针变量
//	// int说明p指向的对象是int类型
//	* p = 20;//解引用操作符，意思就是通过p中存放的地址，找到p所指向的对象，*p就是p指向的对象
//	printf("%d\n", a);
//	//char ch = 'w';
//	//char * pc = &ch;
//	return 0;
//}

//// 7.2指针变量的大小
//int main()
//{
//	//int* p;
//	//char* p2;
//
//	//不管是什么类型的指针，都是在创建指针变量
//	//指针变量是用来存放地址的
//	//指针变量的大小取决于一个地址存放的时候需要多大空间
//	//32位机器上的地址是32bit位-4byte，所以指针变量的大小是4个字节
//	//64位机器上的地址是64bit位-8byte，所以指针变量的大小是8个字节
//
//	printf("%zd\n", sizeof(char*));//4
//	printf("%zd\n", sizeof(short*));//4
//	printf("%zd\n", sizeof(int*));//4
//	printf("%zd\n", sizeof(float*));//4
//	printf("%zd\n", sizeof(double*));//4
//	return 0;
//}

// 8.结构体--是把一些单一类型组合在一起的做法

////描述一个学生
//struct Stu
//{
//	//结构体的成员
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//->操作符 ———— 结构体的指针变量->成员名
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct Stu s = {"zhangsan",20,"nan","15565498756"};
//
//	// .操作符----结构体对象.成员名
//	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}

//define不是关键字，是预处理指令

//计算带除余数


int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//计算
	int m = a / b;
	int n = a % b;
	//输出
	printf("%d %d\n", m, n);
	return 0;
}