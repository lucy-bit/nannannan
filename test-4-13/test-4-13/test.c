#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			k = i*j;
			printf("%d*%d=%d ", i, j, k);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}