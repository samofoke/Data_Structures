import subprocess

code = r'''
#include <iostream>
using namespace std;

int main()
{
    cout<< "hello world\n";
    return 0;
}
'''

file_cpp = "new_file.cpp"
with open(file_cpp,'w') as FOUT:
    FOUT.write(code)
