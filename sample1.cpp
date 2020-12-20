#include "header/std_lib_facilities.h"

int main(void)
{
    //compute an area

    int l;
    int w;
    int area;
    int p;

    l = 20;
    w = 40;

    area = l * w;
    p = (l * w) * 2; // you can l * 2 + w * 2; or (l * 2) + (w * 2);
    cout << "the area is: " << area;
    cout << "\n";
    cout << "the p is: " << p;
    cout << "\n";
    return (0);

}
