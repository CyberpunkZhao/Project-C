#include<stdio.h>
int sex(int j)
{
	for (int k = 2; k < j; k++)
	{
		if (j % k == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i, count = 0;
	for (i = 100; i < 200; i++)
	{
		if (sex(i))
		{
			printf("%dÊÇËØÊý\n", i);
		}
	}
	return 0;
}