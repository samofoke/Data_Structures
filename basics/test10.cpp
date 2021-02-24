#include "../header/std_lib_facilities.h"

using namespace std;

int main()
{
    vector<int>x = {2, 3, 4, 5, 6};

    int i;
    int y;

    i = 0;
    y = 5;
    //this doesn't fix the error is just a hack so I will
    //do some more study to understand why this happens.
    while (i < x[i])
    {
        if (x[i] == y)
        {
            cout<<"I am done and I will wait until I run again.."<<'\n';
            break;
        }
        else
        {
            cout<<"just testing vector: "<<x[i++]<<'\n';
        }
    }
    return(0);
}
