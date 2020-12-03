#include <stdio.h>

int main()
{
    int n;
    int i;
    int sum;
    float avg;

    i = 0;
    sum = 0;
    avg = 0.0;

    printf("Enter a value of n: ");
    scanf("%d", &n);

    do
    {
        sum = sum + i;
        i++;
    }while (i <= n);
    avg = (float)sum / n;
    printf("the sum of the first %d num = %d not bad\n", n, sum);
    printf("the average is %d num = %.2f to two places.\n", n, avg);
    return (0);
}
