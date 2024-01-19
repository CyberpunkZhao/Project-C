//写一个函数，模拟实现strlen函数的作用
//#include<stdio.h>

//用递归模拟实现strlen函数的作用
//int str(char* s)
//{
//	if (*s != '\0')
//	{
//		return 1 + str(s + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "skt t1 faker";
//	////strlen:返回一个字符串的长度，返回值是int
//	////printf("%d",strlen(arr));
//	printf("%d\n", str(arr));
//	return 0;
//}


//用循环实现
//int str(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		*s++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "skt t1 faker!";
//	printf("%d\n", str(arr));
//	return 0;
//}