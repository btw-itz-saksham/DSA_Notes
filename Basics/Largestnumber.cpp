#include <iostream>
using namespace std;

int main(){

    int a,b;

    cout<<"Enter the value of a :"<<endl;
    cin>>a;

    cout<<"enter the value pf b :"<<endl;
    cin>>b;

    if(a>b){
        cout<<"a is greater than b\n";
    }
    if(a%2==0)
    {
        cout<<"Ais also even number"<<endl;
    }
    if(b%2==0)
    {
        cout<<"b is also even number"<<endl;
    }
    else{
        cout<<"b is the greater number";
    }
    return 0;
}


