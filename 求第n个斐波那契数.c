//递归方式
int Fac(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fac(n - 1) + Fac(n-2);
}
int main()
{
	int n;
	scanf_s("%d",&n);
	int s = Fac(n);
	printf("%d", s);
}

//循环方式
int main()
{
	int a=1,b=1,c=0,n;
	scanf_s("%d", &n);
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	printf("%d", c);
	return 0;
}