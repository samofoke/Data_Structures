# Data_Structures
learning algorithms in c++

## Programming: Principles and Practice using C++
course header to be used for the first few weeks, it is a standard library
header file whick conatains C++ stream I/O, #include usually has the sutftx .h and is called a header or a headn-file.
~~~ 
#include "std_lib_facilities.h"
~~~
* In C++, string literals are delimited by double quotes (") ;
  that is, "Hello, World ! \n" is a string of characters.
* cout refers to a standard output stream.
* A zero (0} returned by main() indicates the program terminated
  successfully.
* << the output operator

* linkers
~~~
--> Source code
        
        --> C++ Compiler
                
                --> Object Code
                         
                         --> Linker <-- Standard Library

                                ^
                                |--> Executable program

                ||
                --> Errors found on the compiler:
                    > compile time error.
                    > errors found by the linker are called link-time error.
                    > we have logic errors as well.
~~~
## Computations
* A program what it does is compute as it takes input and produces output.
  we express computations:
  ~~~
  -> correctly
  -> simply 
  -> Efficiently
  ~~~
