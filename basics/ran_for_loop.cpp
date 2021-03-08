#include "../header/std_lib_facilities.h"

using namespace std;

int main()
{
    // this is a range-for-loop example
    // still means a squence of elements
    vector<int> v = {5, 4, 3, 2, 1};

    for (int x : v)
    {
        cout<<"test results: "<<x<<'\n';
    }
    return (0);
}
