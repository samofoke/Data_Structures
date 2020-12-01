#include <stdio.h>
//#include <conio.h>

int main()
{
    float r;
    double ar;
    printf("Enter the radius of a circle: ");
    scanf("%f", &r);
    ar = 3.14 * r * r;
    printf("the Area is: %2.lf", ar);
    printf("\n");
    return 0;
}
