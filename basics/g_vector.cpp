#include "../header/std_lib_facilities.h"

using namespace std;

int main()
{
    //a vector can be resized by just adding elements using push_back()
    //fucntion, as it is part of the member functions.
    
    /*vector<int> v = {3, 4, 5,};

    v.push_back(8);
    for (int i : v)
    {
        cout<<"test 1: "<<i<<'\n';
        cout<<"test 2: "<<v.size()<<'\n';
    }*/ 

    //another example:
    vector<double> d;

    for (double t; cin>>t;)
    {
        if (t == 10.0)
        {
            cout<<"the size of the array is: "<<d.size()<<'\n';
            break;
        }
        else
        {
            d.push_back(t);
        }
    }
    return 0;
}
