#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
/*������������*/
//int main()f
//{
//
//	/*
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "1234") == 0)
//		{
//			printf("������ȷ");
//			break;
//		}
//		else
//		{
//			printf("�����������������");
//		}
//
//	}
//	if (i == 3)
//	{
//		printf("������������������˳�����");
//	}*/
//
//	
//
//
//	system("pause");
//	return 0;
//}


//������
//void menu()
//{
//	printf("****************************\n");
//	printf("*******   1.play     *******\n");
//	printf("*******   0.exit     *******\n");
//	printf("****************************\n");
//}
//void game()
//{
//	int num = 0;
//	
//	num = rand();
//	printf("%d\n", num);
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
//				game();
//				break;
//		case 0:
//				printf("�˳���Ϸ");
//				break;
//		default:
//			printf("����������");
//				break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}




//���ַ�
//int binary_search(int arr[10], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}return -1;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ������±���%d\n", ret);
//	}
//
//
//	system("pause");
//	return 0;
//}



//ת���ַ�
//int main()
//{
//	int ch;
//	printf("������һ���ַ���\n");
//	while ((ch = getchar() )!= EOF)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//		else if (ch >= 'A'&& ch <= 'Z')
//			printf("%c\n", ch + 32);
//		else if (ch >= '0' && ch <= '9')
//			 ;
//		else
//			 ;
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//�ж��Ƿ�Ϊ����
//int judge(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		return 0;
//	else
//		return -1;
//}
//int main()
//{
//	int year = 0;
//	printf("������Ҫ�жϵ���ݣ�\n");
//	scanf("%d", &year);
//	int ret = judge(year);
//	if (-1 == ret)
//	{
//		printf("��������\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//
//	system("pause");
//	return 0;
//}
//
//


//�ж��Ƿ�Ϊ����
// int judge_prime(int num)
//{
//	int i = 0;
//	int m = sqrt(num, 2);
//		for (i = 2; i <= m; i++)
//		{
//			if (num%i != 0)
//			{
//				return num;
//			}
//		}
//			return -1;
//
//}
// int main()
// {
//	 int num = 0;
//	 printf("������Ҫ�жϵ����֣�\n");
//	 scanf("%d", &num);
//	 int ret = judge_prime(num);
//	 if (ret == -1)
//		 printf("��������\n");
//	 else
//		 printf("%d������\n", num);
//	 system("pause");
//	 return 0;
//
// }


//��ӡ�˷���
//void print(int n)
//{
//	int i, j, m;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			m = i*j;
//			printf("%d*%d=%d ", i, j, m);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	system("pause");
//	return 0;
//}



//
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��

void init(int arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		arr[i] = i;
	}
}
void empty(int arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
}
void reverse(int arr[], int size)
{
	int left = 0;
	int right = size - 1;
	int t = 0;
	while (left<right)
	{
		t = arr[left];
		arr[left] = arr[right];
		arr[right] = t;
		left++;
		right--;
	}
}

void print(int arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
		printf("%d\n", arr[i]);
	printf("\n");
}

int main()
{
	int arr[3];
	int size = sizeof(arr) / sizeof(arr[0]);
	init(arr, size);
	print(arr, size);
	reverse(arr, size);
	print(arr, size);
	empty(arr, size);
	print(arr, size);
	system("pause");
	return 0;
}


//��������
//void change(int a, int b)
//{
//	int t = 0;
//	t = a;
//	a = b;
//	b = t;
//}