#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// �ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	
//	int b = 0;
//	b = num % 2;
//	if (b == 1)
//		printf("����\n");
//	else
//		printf("ż��\n");
//	return 0;
//}

// ���1~100֮�������
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

// 2.swtich���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	//case 1:
//	//	printf("����һ\n");
//	//	break;
//	//case 2:
//	//	printf("���ڶ�\n");
//	//	break;
//	//case 3:
//	//	printf("������\n");
//	//	break;
//	//case 4:
//	//	printf("������\n");
//	//	break;
//	//case 5:
//	//	printf("������\n");
//	//	break;
//	//case 6:
//	//	printf("������\n");
//	//	break;
//	//case 7:
//	//	printf("������\n");
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
//		printf("ѡ�����\n");
//		break;
//	}
//
//	return 0;
//}

// 3.ѭ�����
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

// whileѭ���е�
// continue����������ѭ������Ĵ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ�����ж�
// break���������õ���ֹѭ��

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

// 3.2 forѭ��
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
//	//��һ������
//	//����������һ���ַ���
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//
//	//getchar();//��ȡ��\n
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ������(Y/N):>");
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