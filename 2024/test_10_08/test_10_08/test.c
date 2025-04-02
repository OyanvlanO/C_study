#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 判断一个数是否为奇数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	
//	int b = 0;
//	b = num % 2;
//	if (b == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//	return 0;
//}

// 输出1~100之间的奇数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//
//		i = i + 1;
//	}
//
//	return 0;
//}

// 2.swtich语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	//case 1:
//	//	printf("星期一\n");
//	//	break;
//	//case 2:
//	//	printf("星期二\n");
//	//	break;
//	//case 3:
//	//	printf("星期三\n");
//	//	break;
//	//case 4:
//	//	printf("星期四\n");
//	//	break;
//	//case 5:
//	//	printf("星期五\n");
//	//	break;
//	//case 6:
//	//	printf("星期六\n");
//	//	break;
//	//case 7:
//	//	printf("星期日\n");
//	//	break;
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//	}
//
//	return 0;
//}

// 3.循环语句
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

// while循环中的
// continue是跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断
// break是用于永久的终止循环

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//        i++;
//		if (5 == i)
//		    continue;
//		printf("%d ", i);
//
//	}
//	return 0;
//}

// 3.2 for循环
#include <string.h>

//int main()
//{
//	//int ch = getchar();
//	//printf("%c\n", ch);
//	//putchar(ch);
//	//EOF; // end of file
//	
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//
//	//	putchar(ch);
//
//	//}
//
//	//举一个例子
//	//假设密码是一个字符串
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//
//	//getchar();//读取了\n
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("请确认密码(Y/N):>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//		printf("No\n");
//
//	return 0;
//}

// 