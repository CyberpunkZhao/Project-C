//求十个整数中最大值
int main()
{
	int x[10];
	for (int i = 0; i <=9; i++)
	{
		scanf_s("%d", &x[i]);
	}

	int max = x[0];
	for (int i = 1; i <10; i++)
	{
		if (x[i] > max)
			max = x[i];
	}
	printf("%d", max);
	return 0;
}