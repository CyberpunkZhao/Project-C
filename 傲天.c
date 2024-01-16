#include<stdio.h>
#include<string.h>
#include<math.h>
//函数实现两数相加
////int main()
////{
////	int a, b;
////	scanf_s("%d,%d", &a ,& b);
////	int c = ggg(a, b);
////	printf("%d", c);
////}
////
////int ggg(int x, int y)
////	{
////		int sum;
////		sum = x + y;
////		return sum;
////	}


//for循环输出数组
////int main()
////{
////	int arr[10] = { 3 };
////	for (int i = 0; i <= 9; i++)
////	{
////		printf("%d\n", arr[i]);
////	}
////	return 0;
////}


//双精度丢失
//int main()
//{
//	float h = 2.123456789;
//	double s = 3.1234567891011;
//	printf("%f\n",h);
//	printf("%lf",s);
//	return 0;
//}


//for嵌套求素数
//int main()
//{
//	int i,n,count=0;
//	for (n = 100; n < 200; n++)
//	{
//		for (i = 2; i < n; i++)
//		{
//			if (n % i == 0)
//				break;
//		}
//		if (i == n)
//		{
//			printf("%d是素数\n", n);
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//调用函数求素数
//int sex(int j)
//{
//	for (int k = 2; k < j; k++)
//	{
//		if (j % k == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{ 
//	int i,count=0;
//	for (i = 100; i < 200; i++)
//	{
//		if (sex(i))
//		{
//			printf("%d是素数\n", i);
//		}
//	}
//	return 0;
//}


//调用函数求闰年
//year(int x)
//{
//	if ((x%4==0)&&(x%100!=0)||(x%400==0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (year(i))
//		{
//			printf("%d是闰年", i);
//		}
//	}
//	return 0;
//}


//“规范”写法调用函数求闰年
//int year(int x)
//{
//	if((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (year(i))
//		{
//			printf("%d是闰年  ", i);
//		}
//	}
//	return 0;
//}


//二分查找法
//int sc(int a[], int key, int size)
//{
//	int left = 0;
//	int right = size-1;
//
//	int mid = ((left + right) / 2);
//
//	while (left <= right)
//	{
//
//		if (a[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
//	int key = 10;
//	int size = sizeof(a) / sizeof(a[0]);
//	int re = sc(a,key,size);
//	if (re != -1)
//	{
//		printf("找到力！是：%d", re);
//	}
//	else
//	{
//		printf("没找到力！");
//	}
//	return 0;
//}


//写一个函数，调用一次sum加一
//void add(int *a)
//{
//	(*a)++;
//}
//
//int main()
//{
//	int sum = 0;
//	add(&sum);
//	printf("%d\n", sum);
//	add(&sum);
//	printf("%d\n", sum);
//	add(&sum);
//	printf("%d\n", sum);
//	add(&sum);
//	printf("%d\n", sum);
//	add(&sum);
//	printf("%d\n", sum);
//	return 0;
//}

