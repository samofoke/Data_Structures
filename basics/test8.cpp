#include "header/std_lib_facilities.h"

using namespace std;

int main()
{
    for (char a = 'a'; a <= 'z'; a++)
    {
        if (a == 'z' && a != '\0')
        {
            for (char A = 'A'; A <= 'Z'; A++)
            {
                cout<<"for cap: "<<A<<" and the ascii: "<<int(A)<<endl;
            }
        }
        cout<<"char is: "<<a<<" and int is: "<<int(a)<<endl;
    }
    return 0;
}
