#include <stdio.h>

int main()
{
    float num;
    int n;

    printf("Inter an integer: ");
    scanf("%d", &n);
    num = (float)n;
    printf("The float point of %d is %.2f", n, num);
    printf("\n");
    return 0;
}
