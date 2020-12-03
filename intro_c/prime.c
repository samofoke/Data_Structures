#include <stdio.h>

int main()
{
    int f;
    int i;
    int n;

    f = 0;
    printf("Inter a value: ");
    scanf("%d", &n);
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        printf("the composite num is: %d \n", n);
    }
    else
    {
        printf("the prime is: %d \n", n);
    }
    return (0);
}
