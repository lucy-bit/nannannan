#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main()
{

���ַ�����
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
			printf("�ҵ������±���%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���");


////���������¼ϵͳ
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�");
//			break;
//		}
//		else
//		{
//			printf("����������������룡\n");
//		}
//	}
//	if (i == 3)
//		printf("������������ԣ��˳�����\n");




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