#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int *ptrA = &a; // pointer that holds the address of variable a

    int b = 20;
    int *ptrB = &b; // pointer that holds the address of variable b

    int **ptrC= &ptrB; // pointer to pointer variable that stores addresss of another pointer.

    int *ptrnull=NULL;//null pointer // not referencing to any memory location // 0 - address.

    // Address values are typically printed in hexadecimal form.

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of ptrA: " << ptrA << endl; // should match address of a
    cout << "Value pointed to by ptrA: " << *ptrA << endl;//should match value of a. // here *ptr is dereference variable

    cout << "\nValue of b: " << b << endl;
    cout << "Address of b: " << &b << endl;
    cout << "Value of ptrB: " << ptrB << endl; // should match address of b
    cout << "Value pointed to by ptrB: " << *ptrB << endl;//should match value of b. //here *ptr is dereference variable

    cout<<"address of ptr C  = "<<**ptrC<<endl;//here **ptrC is dereference variable

    cout<<*(&a)<<endl;     // will give the vale of a as * is dereference variable 
    //cout<<*ptrnull<<endl; // its dangerous to derefrnce a null pointer variable. // segmentation fault

    return 0;
}