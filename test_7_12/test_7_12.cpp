#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//�ػ�����
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("һ�����ڹػ�������������ȡ���ػ�");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}





//��������Ϸ
//��������һ�������  ������
//ʱ��� ��ǰ�������ʱ��-��ʼʱ�� 
//
//void menu()
//{
//	printf("****************************\n");
//	printf("****  1.plau   0.exit   ****\n");
//	printf("****************************\n");
//}
//
//void game()
//{
//	int ret=0;
//	int guess;
//	
//	ret = rand()%100;//����1-100֮��������
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("please guess number\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("bingo!\n");
//				break;
//		}
//
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//play game
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}



//����˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d =%-2d ", i, j, i * j);
//		    
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//10���������ֵ
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}




//������� 1/1-1/2+1/3-1/4
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//
//	printf("%lf\n", sum);
//
//	return 0;
//}






//1-100�ֳ����˶��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//
//	return 0;
//}


//��ӡ100-200������  ����������n�ַ�����
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�����
//		//�����Գ���  2-i-1�������Գ�
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >sqrt(i))
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("count==%d ", count);
//	return 0;
//}

//��ӡ1000-2000������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//
//	return 0;
//}