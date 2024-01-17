#include<stdio.h>
int main()
{
	int i, n, count = 0;
	for (n = 100; n < 200; n++)
	{
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
				break;
		}
		if (i == n)
		{
			printf("%dÊÇËØÊý\n", n);
			count++;
		}
	}
	printf("%d", count);
	return 0;
}