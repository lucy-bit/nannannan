#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main()
{

二分法查找
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 4;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到啦，下标是%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到");


////输入密码登录系统
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入！\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均不对，退出程序\n");




	//void menu()
	//{ 
	//	printf("*********************\n");
	//	printf("*****   1.play  *****\n");
	//	printf("*****   2.exit  *****\n");
	//	printf("*********************\n");
	//}
	//do
	//{

	//	menu();
	//} while ();
	system("pause");
	return 0;
}