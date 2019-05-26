#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int binary_search(int sz, int k, int arr[])
{
	int left = 0;

	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid]>k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int k = 7;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(k, arr, sz);
	if (-1 == ret)
	{
		printf("找不到");
	}
	else
	{
		printf("找到啦，下标是:%d\n", ret);
	}
	system("pause");
	return 0;
}