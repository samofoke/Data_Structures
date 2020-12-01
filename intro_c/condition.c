#include <stdio.h>

int main()
{
    int x;

    x = 10;

    // this test expression checks if the statement of 10 > 0
    // if is true it adds 1 on x and then x is equal to 11.
    if (x > 0)
    {
        x++;
    }
    printf("x = %d", x);
    printf("\n");
    return 0;
}
