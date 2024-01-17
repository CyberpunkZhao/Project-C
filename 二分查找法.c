#include<stdio.h>
int sc(int a[], int key, int size)
{
	int left = 0;
	int right = size - 1;

	int mid = ((left + right) / 2);

	while (left <= right)
	{

		if (a[mid] > key)
		{
			right = mid - 1;
		}
		else if (a[mid] < key)
		{
			left = mid + 1;
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
	int a[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21 };
	int key = 10;
	int size = sizeof(a) / sizeof(a[0]);
	int re = sc(a, key, size);
	if (re != -1)
	{
		printf("找到力！是：%d", re);
	}
	else
	{
		printf("没找到力！");
	}
	return 0;
}