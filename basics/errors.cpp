#include "../header/std_lib_facilities.h"

using namespace std;

int area(int l, int w)
{
    int a;

    a = 0;

    a = l * w;
    return(a);
}

int main()
{
    int x;

    x = area(2, 4);
    char test = area(100,9999);
    cout<<test<<'\n';
    cout<<x<<'\n';
    return 0;
}
