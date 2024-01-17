#include<stdio.h>
int main()
{
	int a, b;
	scanf_s("%d,%d", &a, &b);
	int c = ggg(a, b);
	printf("%d", c);
}

int ggg(int x, int y)
{
	int sum;
	sum = x + y;
	return sum;
}