//��n�Ľ׳�
#include <stdio.h>
//ѭ����n�׳�
int main()
{
	int i,n;
	int ret = 1;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d", ret);
	return 0;
}

//�ݹ���n�׳�
int JieCheng(int x)
{
	if (x>1)
		return x*JieCheng(x - 1);
	else
		return 1;
}
int main()
{
	int n,ret;
	scanf_s("%d", &n);
	ret=JieCheng(n);
	printf("%d", ret);
	return 0;
}