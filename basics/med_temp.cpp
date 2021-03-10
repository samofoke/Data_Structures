#include "../header/std_lib_facilities.h"

using namespace std;

int main()
{
    /*this method is not really safe as
     * a user needs to input a char in order to
     * break out of the loop of the example
     * I will fix it later, but this is just an exmaple 
     * playing around with vectors.
     * */
    
    vector<double> tmps;

    for (double tmp; cin>>tmp;)
    {
        tmps.push_back(tmp);
    }
    double sum = 0;

    for (int i : tmps)
    {
        sum += i;
    }
    cout<< "the average is: "<<sum/tmps.size()<<'\n';

    sort(tmps);
    cout<<"print tmps: "<<tmps.size()<<'\n';
    cout<<"median is: "<<tmps[tmps.size() / 2]<<'\n';
    return 0;
}
