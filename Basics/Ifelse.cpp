#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    if(a>0)            // if statement is always executed atleast once.
    {
        cout<<"The number is positive."<<endl;
    }
    else if(a<0)
    {
        cout<<"The number is negative."<<endl;
    }
    else if(a==0)
    {
        cout<<"The number is zero."<<endl;
    }
    else
    {
        cout<<"Please enter a valid number."<<endl;
    }

    return 0;
}
