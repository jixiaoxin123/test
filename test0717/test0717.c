#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ð������ ����
void bubble_sort(int arr[],int sz)
{
	//ȷ��ð�����������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//���������Ѿ�����
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//��������������ʵ����ȫ����
			}
		}
		if (flag == 1)
		{
			break;
		}
	}

}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (i = 0; i < sz ; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}



//int main()
//{
//	char arr1[] = "abd";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1)); //4
//	printf("%d\n", sizeof(arr2)); //3
//	printf("%d\n", strlen(arr1)); //3
//	printf("%d\n", strlen(arr2)); //�����
//
//	return 0;
//}