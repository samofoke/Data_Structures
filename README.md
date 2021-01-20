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

* A constexpr symbolic constant must be given a value that is known at compile time.
  ~~~
  #include <iostream>

  constexpr int m = 100;

  void use(int n)
  {
    constexpr int a1 = m + 7;

    constexpr int a2 = n + 7; // it will give out an error.
    //we will need to initialize const to a2 for it to work.
  }
  --> in this case it will work.
  --> The const variable doesn't change
  ~~~
### Conversions 
* A very interesting topic.
  ~~~
  #include "header/std_lib_facilities.h"

  int main()
  {
    int d; // if we change d into a double then we can get 2.5
    int x;
    double s;

    d = 5;
    x = 2;

    s = d / x; // this will return 2 unless we change d into a double


    cout<< "well the answer is: "<< s<< endl;
    return 0;
  }
  --> it goes for this example as well:
      f = 9.0/5 * c + 32
  ~~~
### Statements

  * a statement is a syntactic unit of an imperative programming language 
    that expresses some action to be carried out.

    --> expression statements:
      An expression statement is simply an expression followed by a
      semicolon.
      ~~~
      a = b;
      ++b;
      ~~~

    --> declaration statements: 






