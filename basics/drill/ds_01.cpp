#include "../../header/std_lib_facilities.h"

using namespace std;

int     main()
{
    int x;
    int y;
    int i;
    int e;
    char c;

    cout<<"enter first num: ";
    cin>>x;
    cout<<"enter second num: ";
    cin>>y;
    cout<<"enter a character: ";
    cin>>c;

    i = 0;
    e = 1;
    while (i < e)
    {
        if (c == '|')
        {
            cout<<"I have to stop now: bye..."<<'\n';
            break;
        }
        else
        {
            cout<<"first num: "<<x * y<<'\n';
            cout<<"second num: "<<y + x<<'\n';
        }
        i++;
    }
    return (0);
}
