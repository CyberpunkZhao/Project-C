//循环实现字符串逆序
//#include <stdio.h>
//
//char my_string(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        *str++;
//    }
//    return count;
//}
//void reverse_string(char *string)
//{
//    int left = 0;
//    int right = my_string(string) - 1;
//    while (left < right)
//    {
//        char temp = string[left];  
//        //char temp = *(srting+left);  
//        string[left] = string[right];
//		  //*(string+left)=*(string+right);
//        string[right] = temp;
//		  //*(string+right)=temp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char arr[] = "abcdef";
//    reverse_string(arr);
//    printf("%s\n", arr);
//    return 0;
//}


//递归实现字符串逆序
//#include <stdio.h>
//
//char my_string(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        *str++;
//    }
//    return count;
//}
//
//void reverse_string(char *str)
//{
//    char tmp = *str;
//    int len = my_string(str);
//    *str=*(str + len - 1);
//    *(str + len - 1) = '\0';
//    if(my_string(str+1)>=2) 
//    {
//        reverse_string(str + 1); 
//    }
//    *(str + len - 1)=tmp;
//}
//
//int main()
//{
//    char arr[] = "abcdef";
//    reverse_string(arr);
//    printf("%s\n", arr);
//    return 0;
//}