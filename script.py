import subprocess

code = '''
#include "header/std_lib_facilities.h"
#include <iostream>
using namespace std;

int main()
{
    cout<< "hello world";
    return 0;
}
'''

file_cpp = "template.cpp"
with open(file_cpp,'w') as f:
    f.write(code)
