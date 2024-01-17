#include<stdio.h>
year(int x)
{
	if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
	{
		return 1;
	}
	return 0;
}
int main()
{
	int i;
	for (i = 1000; i <= 2000; i++)
	{
		if (year(i))
		{
			printf("%d是闰年", i);
		}
	}
	return 0;
}


“规范”写法调用函数求闰年
int year(int x)
{
	if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int i;
	for (i = 1000; i <= 2000; i++)
	{
		if (year(i))
		{
			printf("%d是闰年  ", i);
		}
	}
	return 0;
}