#include <stdio.h>

void    sum(int *a, int *b, int *c)
{
    *c = *a + *b;
}

int     main()
{
    int n1;
    int n2;
    int t;

    printf("enter a value: ");
    scanf("%d", &n1);
    printf("enter another value: ");
    scanf("%d", &n2);
    sum(&n1, &n2, &t);
    printf("\n");
    printf("The sum of all is %d \n", t);
    return (0);
}
