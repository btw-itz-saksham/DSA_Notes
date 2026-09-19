#include <iostream> //these are preprocessor directives, they are used to include the header files in our program.
using namespace std;// cout and cin functions are declared in the std namespace, and defined in iostream header file.
#define PI 3.14 //this is a macro definition, it is used to define a constant value.
//These macros does not take space in the memory and are different from constant variables .
typedef int myint;       // this type def can change existing to anything(we can use the word myint instead of word int)

myint main() {    // main is start point of the execution 

    myint a =6 ; 

    cout << "Hello Bhai\n"; // cout is an object of the ostream class, it is used to print the output on the console. 
                          //The << operator is used to insert the data into the output stream.
    cout << PI;

    std ::cout <<"\nHello\n";// we can also use std::cout to specify that cout in registered in std namespace 

    cout << "\nThe value of a is: " << a; // we can also use cout to print the value of a variable.

    return 0;
}