#include <iostream>
using namespace std;

// cin object of iostream class is used to take input from the user.
int main(){
    int a;
    int b;

    //Taking  a and b as  input 
    cout<<"Enter value of a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;

    //Calculating sum of a and b
    int Sum = a+b;
    int product = a*b;
    int difference = a-b;
    int quotient = a/b;

    cout <<"Value of a is "<<a<<" and value of b is "<<b;
    cout<<"\nSum of a and b is "<<Sum;
    cout<<"\nProduct of a and b is "<<product;
    cout<<"\nThe difference of a and b is "<<difference;
    cout<<"\nThe quotient of a and b is "<<quotient;
    return 0;
}