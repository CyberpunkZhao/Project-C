//дһ��������ģ��ʵ��strlen����������
//#include<stdio.h>

//�õݹ�ģ��ʵ��strlen����������
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
//	////strlen:����һ���ַ����ĳ��ȣ�����ֵ��int
//	////printf("%d",strlen(arr));
//	printf("%d\n", str(arr));
//	return 0;
//}


//��ѭ��ʵ��
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