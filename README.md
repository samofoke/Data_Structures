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

    --> declaration statements: the specification of a name with its type 
      in a program.
      ~~~
      int a = 7;
      cout << a << '\n';
      ~~~
    --> the empty statement
        The compiler will test x to see if it has the value 5. If this condition is true, the following statement (the empty statement) will be executed, with no effect. Then the program continues to the next line, assigning the value 3 to y (which is what you wanted to have happen if x equals 5). If, on the other hand, x does not have the value 5, the compiler will not execute the empty statement (still no effect) and will continue as before to assign the value 3 to y (which is not what you wanted to have happen unless x equals 5).
      ~~~
      if (x == 5);
      { y = 3; }
      ~~~
  
  * We now look at selection in C++ and we look closely at if-statements
   and switch-statements
    ~~~
    An if statement chooses between 2 alternatives in this example but they can be
    multiple case of many alternatives based on the complexity of the problem.

    if condition is true;
        print A;

    esle if condition is false;
        print B;

    the traffic example:
    if (light == green)
        go();
    else if (light == red)
        wait();

    the next will be looking at switch-statements
    -> switch is compared to a set of constants.

    char unit = 'a';
        cout<<"Please enter: ";
        cin>>len>>unit;
        
        switch(unit) {
            case 'i':
                    the condition;
                    break;
            case 'c':
                    the second condition;
                    break;
            default:
                    the last condition;
                    break;
        }
        switch technicals-> types of data types apply, you can not use
                            a variable type already in use in a case statement.
                            each case end with a break.To select based on a string
                            you have to use a if statement or a map
                            if your switch are variables they must be for all of
                            them or if they're int for example. The most common
                            error for switch statement is forgeting "break".
    ~~~
  
  * We have a look at the while-statement.

    ~~~
    int main()
    {
        int i = 0;
        while (i <= 100)
        {
            cout<<"the int is: "<<i<<" and the sqt is: "<<square(i)<<'\n';
            i++; or i = i + 1;
        }
        return (0);
    }
    ~~~

  * A sequence of statements delimited by curly braces { and }
   is called a block or a compound statement.
    ~~~
    a simple example can look like this:
    { }
    or if (satement){
            
    }
    else {
        statement;
    }
    ~~~
  * We also look at for-statements as well using a for-statement yields more
   easily understood and more maintainable code whenever a loop can be defined
   as a for-statement with a simple initializer, condition, and increment operation. 
    ~~~
    an example:
    for (satement) {
        body;
    }
    ~~~
   * Functions allow you to break your code in smaller parts and be able to reuse
   functionalities in your code.

     ~~~
     int a()
     {
        code;
     }

     int main()
     {:
        cout<<a(int)<<endl;
        return (0);
     }
     ~~~

   * Looking at TDD in C++
     
     ~~~
     we always write a test that fails, we fake it and write the actual test.
     we can archieve this by building a small framke work of our own or just 
     building functional one.

     bool test1()
     {
        the test code;
     }

     the check function.
     #define UNIT_TEST(x) {if (x) cout<<}

     void test()
     {
        call the test1 code;
     }

     int main()
     {
        call test; 
     }
     ~~~

  * this focuses on vectors:
   The elements are stored contiguously, which means that elements can be accessed not 
   only through iterators, but also using offsets to regular pointers to elements. 
   This means that a pointer to an element of a vector may be passed to any function that 
   expects a pointer to an element of an array. 

     ~~~
     i = i[4] i[2] i[6] i[10] i[8]
         
         we start at index 0 and increment until to last index.
         vector<int>i = {1, 2, 3, 4, 5}

     ~~~ 
  * terminate called after throwing an instance of 'Range_error' getting this error on
   vector while looping through an array of numbers and what will be the trigger for this.

     ~~~
     We can also define a vector of a given size without specifying the element
     values. In that case, we use the (n) notation where n is the number of
     elements, and the elements are given a default value according to the
     element type.

     int main()
     {
         vector<int>v(6);

         int x;

         x = 0;
         while (x < x[i])
         {
             cout<<"the int is: "<<x[i++]<<'\n';
         }
         return (0);
     }

     this is just example showing how to use std::vector 

     std::vector is a sequence container that encapsulates dynamic size arrays.
     ~~~

  * Traversing a vector we can use a range-for-loop
      ~~~
      an example can be:

      vector<int> vec(5);

      for (int i : vec)
      {
          return the test;
      }
      ~~~ 

   * to exit on of the loops in this examples one has to press crl + D, we can use
   for char data types as well as elements within the array.

   * We going to look at suorces of errors in C++
      ~~~
      -> The list of expected errors:
         
         -> Poor specification
         -> incomplete programs
         -> unexpected arguments
         -> unexpected state
         -> logical errors
      ~~~
   * Having a closer look at error handling
      ~~~
       at times writing errors inside a function is really not a good idea

       -> reasons been we can't modify the function definition, the function may be already
          compiled and just an executable file.
       -> A called function doesn't know how to handle an error.
       -> performace.

       ***The is exception handling in C++***
       
       -> The is 2 types of exceptions in C++
            -> Synchronous
            -> Asynchronous
            
            #include <iostream>
            using namespace std;

            int main()
            {
                int x = -1;
                // Some code
                cout << "Before try \n";
                try {
                    cout << "Inside try \n";
                    if (x < 0)
                    {
                        throw x;
                        cout << "After throw (Never executed) \n";
                    }
                }
                catch (int x ) {
                    cout << "Exception Caught \n";
                }
                cout << "After catch (Will be executed) \n";
                return 0;
            }
      ~~~


 * The is an error which a vector gets if you not using it proprely which is
   off-by-one error "The range-error" it happens if the range is not at the 
   position the vector requires it.

      ~~~
      int main()
      try {
          // our program
          return 0; // 0 indicates success
        }
        catch (exception& e) {
            cerr << "error: " << e.what() << '\n';
            keep_window_open();
            return 1; // 1 indicates failure
        }catch (...) {
            cerr << "Oops: unknown exception!\n";
            keep_window_open();
            return 2; // 2 indicates failure
        }

        this an example of how to return an error for runtime error.

        void error(string s1, string s2)
        {
            throw runtime_error(s1+s2);
        }
        this is if you want to output types of errors for your basics error handling.
      ~~~




