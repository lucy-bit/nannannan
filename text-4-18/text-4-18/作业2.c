#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	/*int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 5, 4, 3, 2, 1 };
	int tmp;
	int i = 0;
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");*/

	/*double n = 1;
	double sub = 0;
	double q = 1;
	double trem = 0;
	while (n < 7.0)
	{
		trem = q*(1.0 / n);
		sub = sub + trem;
		q = -q;
		n++;
	}
	printf("sub=%f\n", sub);
	*/

	int i = 0;
	int sum = 0;
	for (i = 0; i < 100; i++)
	{
		if (i % 10 == 9)
			sum++;
		if (i / 10 == 9)
			sum++;
	}
	sum = sum - 1;
	printf("%d\n", sum);


	system("pause");
		return 0;
	
}