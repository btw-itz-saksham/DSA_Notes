#include <iostream>
using  namespace std;

int main(){

    //variable name should not be a reserved keyword
    int a =10;
    int b =20;
    const int c =30; // this is a constant variable, we cannot change the value of c after initialization.

    cout<<"a =" << a << endl;        // endl is also used for next line
    cout<<"b =" << b;

    return 0;
}