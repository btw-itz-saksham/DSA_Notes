#include<iostream>
using namespace std;

//pointer arthematic

int main(){

    int a=10;
    int *aptr = &a;


    cout<<&a<<endl;
    cout<<*aptr<<endl;
    //++ and -- operator increment or decrement the location of an address +1 or -1 exactly according to the type and correspondingly size  of pointer ;e.g its 4 for int.
    aptr++;
    cout<<aptr<<endl;
    cout<<(aptr + 3)<<endl;   // this will move the pointer 3 times the size of int i.e 3*4=12 bytes forward from its current location.


    int arr[] = {10,20,30,40};
    int *ptr = arr;

    cout<<"ARRAY"<<endl;

    cout << *ptr << endl;      // 10  // 1000
    ptr++;                            // 1004
    cout << *ptr << endl;      // 20 
    ptr++;                            // 1008
    cout << *ptr << endl;      // 30

    cout << *(ptr+1) << endl;      // 40    //1012
    cout << ptr << endl;       // address of 40

    ptr = ptr+1;
    cout<<*ptr<<endl;       // 40  //1012

    ptr = ptr +1;
    cout<<*ptr<<"Garbage value"<<endl;      // garbage value because we are trying to access the memory location which is not allocated to our program.

    ptr = ptr-2;
    cout<<*ptr<<endl;       // 30
    

    //operatio with pointer

    cout<<"OPERATION WITH POINTER"<<endl;

    int arr1[20]={1,2,3,4,5,6};
    int *ptr1=arr1;

    int *ptr2=ptr1 +3;

    cout<<ptr1<<" "<<*ptr1<<endl;      // address of x
    cout<<ptr2<<" "<<*ptr2<<endl;      // address of x + 3*4 = address of x + 12 bytes

    cout<<ptr2-ptr1<<endl;     // 3  because ptr2 is 3 times the size of int ahead of ptr1,
    //basically differnce of 2 pointer gives the number of elements between them.and + has no sensible logical meaning.


    return 0;
}