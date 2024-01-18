#include<stdio.h>
//如果写在main前面则不用声明，直接使用（定义就是一种声明）
//int add(int x, int y)
//{
//	return x + y;
//}

int main()
{
	int a = 1;
	int b = 2;
	int c;
	//函数写在main后面就得声明，因为编译器是从上到下执行的
	int add(int, int);
	c = add(a, b);
	printf("%d\n", c);
	return 0;
}

int add(int x, int y)
{
	return x + y;
}