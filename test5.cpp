
#include "header/std_lib_facilities.h"

using namespace std;

int main()
{
    //this is an example for selections
    //which we dealing with if-statements.

    constexpr double cm = 2.34;

    double len = 1;
    char unit = 1;

    //the prgram just converts inch and cm and cm to inch
    //entering your input
    cout<<"Please enter the following unit(c or i): \n";
    cin>>len>>unit;

    if (unit == 'i')
        cout<<len<<"in == "<<cm * len<<"cm\n";
    else if (unit == 'c')
        cout<<len<<"cm == "<<len / cm<<"in\n";
    else
        cout<<"Your are out of scope at this point..\n";

    return 0;
}
