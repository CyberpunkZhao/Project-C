//��д������һ��1��100�����������г��ֶ��ٸ�����9
int main()
{
	int count=0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("%d", count);
	return 0;
}