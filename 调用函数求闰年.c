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
			printf("%d������", i);
		}
	}
	return 0;
}


���淶��д�����ú���������
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
			printf("%d������  ", i);
		}
	}
	return 0;
}