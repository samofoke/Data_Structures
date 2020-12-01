#include <stdio.h>

void    even_odd(int *arr, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i % 2 == 0)
        {
            printf("%d is even\n", (arr[i++]));
        }
        else
        {
            printf("%d is odd\n", (arr[i++]));
        }

    }
}

int main()
{
    //int a;
    //int i;
    //i = 0;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 9, 10, 12, 13, 14, 15, 16};
    int n;
    printf("enter a value: ");
    scanf("%d", &n);

    even_odd(arr, n);
    return 0;
}
