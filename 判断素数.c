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
                printf("该数不是素数");
                break;
            }
            else
            {
                printf("该数是素数");
                break;
            }
        }
    }
    return 0;
}