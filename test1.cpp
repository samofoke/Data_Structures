#include "header/std_lib_facilities.h"


int     main()
{
    cout<< "enter a floating point: ";
    double n;
    cin>> n;
    cout<<"n == "<<n
        <<"\n n + 1 == "<< n + 1
        <<"\n 3 x n == "<< 3 + n
        <<"\n 2 + n == "<<n + n
        <<"\n v/ == "<<n * n
        <<"\n 1/2 n == "<< n / 2
        <<"\n sqrt of n == "<<sqrt(n)
        <<endl;
    return 0;
}
