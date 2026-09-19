#include <iostream>
using namespace std;

int main(){
    int a=10;
    int b=5;
    //There are 5 types of operators in c++

    // Arithmetic operators
    cout<<"The sum of a and b is "<<a+b<<endl;
    cout<<"The difference of a and b is "<<a-b<<endl;
    cout<<"The product of a and b is "<<a*b<<endl;
    cout<<"The quotient of a and b is "<<a/b<<endl;
    cout<<"The modulus of a and b is "<<a%b<<endl;

    // Relational operators(boolean output   0,1)
    cout<<"Is a equal to b ? "<<(a==b)<<endl;
    cout<<"Is a not equal to b ? "<<(a!=b)<<endl;
    cout<<"Is a greater than b ? "<<(a>b)<<endl;
    cout<<"Is a less than b ? "<<(a<b)<<endl;
    cout<<"Is a greater than or equal to b ? "<<(a>=b)<<endl;
    cout<<"Is a less than or equal to b ? "<<(a<=b)<<endl;

    // Logical operators
    cout<<"Is a greater than 0 and b greater than 0 ? "<<((a>0) && (b>0))<<endl;
    cout<<"Is a greater than 0 or b greater than 0 ? "<<((a>0) || (b>0))<<endl;
    cout<<"Is a not greater than 0 ? "<<!(a>0)<<endl;

    // Assignment operators
    int c = a; 
    c += b; // c = c + b
    c -= b; // c = c - b
    c *= b; // c = c * b
    c /= b; // c = c / b
    c %= b; // c = c % b

    // Unary operators
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a after increment is "<<++a<<endl; // pre-increment //update and use
    cout<<"The value of a after decrement is "<<--a<<endl; // pre-decrement
    cout<<"The value of a after post-increment is "<<a++<<endl; // post-increment //use and update
    cout<<"The value of a after post-decrement is "<<a--<<endl; // post-decrement
    
    return 0;
}