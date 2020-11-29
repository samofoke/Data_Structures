import subprocess

code = '''
#include <iostream>
using namespace std;

int main()
{
    cout<< "hello world";
    return 0;
}
'''

file_cpp = "new_file.cpp"
with open(file_cpp,'w') as f:
    f.write(code)
