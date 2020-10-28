#include "header/std_lib_facilities.h"

//examples with operations
//
int     main()
{
    int cnt;
    cout<< "enter an int: ";
    cin>> cnt;
    string n;
    cout<< "enter a string: ";
    cin>> n;

    //string cd = name - "yin"
    //it will give an error as your can't
    //subtract a string.

    int ct = cnt + 2;
    string tt = n + "sam";
    cout<< "print me: "<<ct<<"\n"<<"also print me: "<<tt<<"\n";
    return 0;
}
