#include "../header/std_lib_facilities.h"

using namespace std;

class Bad_area{};

int area(int l, int w)
{
    if (l <= 0 || w <= 0)
    {
        throw Bad_area{};
    }
    return(l * w);
}

int framed_area(int x, int y)
{
    constexpr int fr_w = 2;
    if (x - fr_w <= 0 || y - fr_w <= 0)
    {
        error("non positive area() argument called by framed_area()");
    }
    return area(x - fr_w, y - fr_w);
}

int main()
{
    try{
        int x = -1;
        int y = 2;
        int z = 3;

        int a1;
        int a2;
        int a3;
        double rt;

        a1 = area(x, y);
        a2 = framed_area(1, z);
        a3 = framed_area(y, z);
        rt = a1/a3;
    }
    catch (Bad_area) {
        cout<< "Well bad argument to area()"<<'\n';
    }
    return 0;
}
