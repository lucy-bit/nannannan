#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
/*三次输入密码*/
//int main()f
//{
//
//	/*
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "1234") == 0)
//		{
//			printf("密码正确");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入");
//		}
//
//	}
//	if (i == 3)
//	{
//		printf("三次密码输入均错误，退出程序");
//	}*/
//
//	
//
//
//	system("pause");
//	return 0;
//}


//猜数字
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
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//				game();
//				break;
//		case 0:
//				printf("退出游戏");
//				break;
//		default:
//			printf("请重新输入");
//				break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}




//二分法
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
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到啦，下标是%d\n", ret);
//	}
//
//
//	system("pause");
//	return 0;
//}



//转换字符
//int main()
//{
//	int ch;
//	printf("请输入一个字符：\n");
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

//判断是否为闰年
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
//	printf("请输入要判断的年份：\n");
//	scanf("%d", &year);
//	int ret = judge(year);
//	if (-1 == ret)
//	{
//		printf("不是闰年\n");
//	}
//	else
//	{
//		printf("是闰年\n");
//	}
//
//	system("pause");
//	return 0;
//}
//
//


//判断是否为素数
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
//	 printf("请输入要判断的数字：\n");
//	 scanf("%d", &num);
//	 int ret = judge_prime(num);
//	 if (ret == -1)
//		 printf("不是素数\n");
//	 else
//		 printf("%d是素数\n", num);
//	 system("pause");
//	 return 0;
//
// }


//打印乘法表
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
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。

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


//交换两数
//void change(int a, int b)
//{
//	int t = 0;
//	t = a;
//	a = b;
//	b = t;
//}