#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int a[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		a[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d",a[i]);
	}
	system("pause");
	return 0;
}