#include<stdio.h>
//���д��mainǰ������������ֱ��ʹ�ã��������һ��������
//int add(int x, int y)
//{
//	return x + y;
//}

int main()
{
	int a = 1;
	int b = 2;
	int c;
	//����д��main����͵���������Ϊ�������Ǵ��ϵ���ִ�е�
	int add(int, int);
	c = add(a, b);
	printf("%d\n", c);
	return 0;
}

int add(int x, int y)
{
	return x + y;
}