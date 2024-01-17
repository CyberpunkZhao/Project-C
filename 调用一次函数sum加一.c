#include<stdio.h>
void add(int* a)
{
	(*a)++;
}

int main()
{
	int sum = 0;
	add(&sum);
	printf("%d\n", sum);
	add(&sum);
	printf("%d\n", sum);
	add(&sum);
	printf("%d\n", sum);
	add(&sum);
	printf("%d\n", sum);
	add(&sum);
	printf("%d\n", sum);
	return 0;
}