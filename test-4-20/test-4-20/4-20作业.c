#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()


{
	/*int i = 0;
	int j = 0;
	for (i = 1; i <= 15; i = i+ 2)
	{

		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	for (i = 13; i >= 1; i = i- 2)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}*/

	//int i = 0;
	//int j = 0;
	//int m = 0;
	//int n = 0;
	//int k = 0;
	//for (i = 0; i <= 999; i++)
	//{
	//	m = i % 10;//个位
	//	n = (i / 10) % 10;//十位
	//	k = i / 100;//百位
	//	if (m*m*m + n*n*n + k*k*k == i)
	//		printf("%d\n", i);

	//}


	int Sn = 0;
	int a;
	int i = 0;

	printf("请输入a:");
	scanf("%d", &a);
	int j = a;
	for (i = 0; i <= 5; i++)
	{
		for (n = 1; n <= i; n++)
		{
			
			j = j + a * 10 * i;
		}
		Sn = Sn + j;
	}
	printf("%d", Sn);

	system("pause");
	return 0;
}