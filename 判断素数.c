#include <stdio.h>
int main()
{
    int a;
    scanf_s("%d", &a);
    if (a > 1)
    {
        for (int i = 2; i <= a; i++)
        {
            if (a % i == 0)
            {
                printf("������������");
                break;
            }
            else
            {
                printf("����������");
                break;
            }
        }
    }
    return 0;
}