#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	/*int i = 0;
	int c = 1;
	int n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		c = c*i;
	}
	printf("%d", c);*/

	int i = 0;
	int c = 1;
	int n, sum=0;
	int j = 1;
	for (i = 1; i <= 3; i++)
	{
		c = 1;
		for (j = 1; j <= i; j++)
		{
			
			c = c*j;
		}
		sum += c;
	}
	printf("%d", sum);
	system("pause");
	return 0;

}