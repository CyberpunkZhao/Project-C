#include<stdio.h>
void pr(unsigned int n)
{
	if (n > 9)
	{
		pr(n / 10);
	}
	printf("%u   ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf_s("%u", &num);
	pr(num);
	return 0;
}