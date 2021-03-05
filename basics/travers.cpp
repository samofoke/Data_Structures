#include "../header/std_lib_facilities.h"

using namespace std;

int main()
{
    vector<int> v = {3, 1, 2, 4, 6, 8, 9, 10};
    int i;

    i = 0;
    while (v[i])
    {
        if (i == v[4])
        {
            break;
        }
        else
        {
            cout<<"the test: "<<v[i]<<endl;
        }
        i++;
    }
    return (0);
}
