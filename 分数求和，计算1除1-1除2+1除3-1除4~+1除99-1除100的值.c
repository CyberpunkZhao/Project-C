//分数求和，计算1/1-1/2+1/3-1/4...+1/99-1/100的值
int main()
{
	int n = 1;
	double sum = 0.0;
	for (int i = 1; i <= 100; i++)
	{
		sum += (1.0/i)*n;
		n = -n;
	}
	printf("%lf", sum);
	return 0;
}