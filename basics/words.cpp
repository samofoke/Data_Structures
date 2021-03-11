#include "../header/std_lib_facilities.h"

using namespace std;

int main()
{
    /*in this program we take a string of characters and sort
     * them, so basically we just playing around with sort fucntion
     * in order to exit the loop one has to press crl + D in linux terminal.
     * this goes on with the ascii table.
     * also on the window machine you run crl + Z.
     * */

    vector<string> w;

    for (string st; cin>>st;)
    {
        w.push_back(st);
    }
    cout<< "the elements within of the array: "<<w.size()<<'\n';

    sort(w);

    for (int i = 0; i < w.size(); ++i)
    {
        //this test checks for doubles so that we don't repeat words
        if (i == 0 || w[i - 1] != w[i])
        {
            cout<<"print out: "<<w[i]<<'\n';
        }
    }
    return 0;
}
