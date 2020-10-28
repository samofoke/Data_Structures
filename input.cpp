#include "header/std_lib_facilities.h"

//we creating a small that take a string and 
//a int and prints them out.

int     main()
{
    cout<< "Enter your name: "; //this will run first.
    string n;
    int a;
    double d;
    char c;
    bool b;
    cin>>n; //this will be the first input for string.
    cout<< "your age: "; //this run second.
    cin>>a;
    cout<< "what's the double: ";
    cin>>d;
    cout<< "what's the character: ";
    cin>>c;
    cout<< "what's the boolean: ";
    cin>>b;
    cout<<"\n";
    cout<< "your results\n";
    cout<< "Hi I am "<<n<<" in the age of "<<a<<"\n";
    cout<<d<<"\n"<<c<<"\n"<<b<<"\n";
    return 0;
}
