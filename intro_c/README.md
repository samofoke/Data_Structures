## Printf()
* Is a function used to display information required by the user.
  ~~~
  %[flags][width][.precision][modifiers]type
  ~~~

### flags:
* it is an optional argument which specifies output
~~~
decimal point.
numerical sign.
trailing zeros.
octadecimal.
hexadecimal prefixes.
~~~
### width:
* is an optional argument which specifies the minimum number of positions
  that the output characters will occupy.
### precision:
* is an optional argument which specifies the number of digits to print
  after the decimal point or the number of characters to print from a string.

### modifiers:
* field is same as given for scanf() function.

### type:
* is used to define the type and the interpretation of the value
  of the corresponding argument.

### Control statement
#### decision control statement
* if statement
~~~
if (test expression)
{
  statement 1;
  ..........
  statement 2;
}
statement 3;
~~~

### Switch Statements
* switch case statements are often used as an alternative to long if
statements that compare a variable to several ‘integral’ values (integral values are those values
that can be expressed as an integer, such as the value of a char ). Switch statements are also used
to handle the input given by the user.
~~~
switch (variable)
{
  case value 1:
    statement block 1;
    break;
  case value 2:
    statement block 2;
    break;
  .....................
  case value N:
    statement block N;
    break;
  default:
    statement block D;
    break;
}
statement X;
~~~
 