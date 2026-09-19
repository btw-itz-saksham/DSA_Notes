#include <iostream>
using namespace std;

void changeAbyvalue(int a){
    a=20;
    cout<<a<<"\n";   //20
    cout<<&a<<"\n";      // address of copy of a in changeA function. // different from address of a in main function.
}

//using refrence variable//&b is the refrence variable
void changeAbyReference(int &b){     // we had passed refrence / address of b in main function to this function. // here &b is reference variable that is reference to b in main function.
    b=20;
    cout<<b<<"\n";   //20
    cout<<&b<<"\n";      // address of b in changeAbyReference function. // same as address of b in main function.
}

//usig pointer variable
void changeAbyPointer(int *ptr){     // we had passed address of c in main function to this function. // here *c is pointer variable that is pointing to c in main function.
    *ptr=20;
    cout<<*ptr<<"\n";   //20
    cout<<ptr<<"\n";      // address of ptr in changeAbyPointer function. // same as address of c in main function.
}

int main(){

    cout<<"This is call by value concept;\n";
    int a= 10;
    changeAbyvalue(a);//20      // this function creates a copy of a and then perform changes in it
                     
    cout<<a<<"\n";//10  // those changes are not reflected in the main function.
    cout<<&a<<"\n";     // address of a in main function.



    cout<<"This is call by reference concept;\n";
    int b= 10;
    changeAbyReference(b);//20      // this function takes reference of a and then perform changes in it
                     
    cout<<b<<"\n";//20  // those changes are reflected in the main function.
    cout<<&b<<"\n";     // address of b in main function.



    cout<<"This is call by pointer concept;\n";
    int c= 10;
    changeAbyPointer(&c);//20      // this function takes pointer to a and then perform changes in it

    cout<<c<<"\n";//20  // those changes are reflected in the main function.
    cout<<&c<<"\n";     // address of c in main function.

    return 0;
}