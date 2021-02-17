
#include "header/std_lib_facilities.h"

// Function to test
bool test1(int a) {
    return a > 5;   
}

// If parameter is not true, test fails
// This check function would be provided by the test framework
#define IS_TRUE(x) { if (!x) cout<< __FUNCTION__ << " failed on line " << __LINE__ <<endl; }
/*
int IS_TRUE(x)
{
    int x;

    if (!x)
    {
        cout<<"failed at line: "<<x<<endl;
    }
}*/
// Test for function1()
// You would need to write these even when using a framework
void test()
{
    IS_TRUE(test1(0));
    IS_TRUE(!test1(5));
    IS_TRUE(test1(10));
}

int main(void) {
    // Call all tests. Using a test framework would simplify this.
    test();
}
