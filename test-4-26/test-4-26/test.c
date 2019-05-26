#include<stdio.h>
#include<stdlib.h>
int binary_search(int arr[], int sz,int k)
{
	int left = 0;
	int right = sz;
	int mid = left + (right - left) / 2;
	while (left <= right)
	{
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] = k)
		{
			return mid;
		}
	}
	else
	{
		printf("’“≤ªµΩ")£ª
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 5;
	int sz = sizaof(arr) / sizeof(arr[0]);
	binary_search(arr, sz);

	system("pause");
	return 0;
}