#include "../header/std_lib_facilities.h"

using namespace std;

int square(int x)
{
    return (x * x);
}

int main()
{
    int i;

    i = 0;
    while (i <= 20)
    {
        cout<< "the square root is: "<<square(i)<<endl;
        i++;
    }
    return 0;
} 
