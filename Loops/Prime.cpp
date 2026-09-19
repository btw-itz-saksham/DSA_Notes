#include <iostream>
#include<cmath>   // for using sqrt function
using namespace std;

int main(){

    int n;
    cout<<"Enter the valiue of n"<<endl;
    cin>>n;
    bool isprime = true;

    for(int i=2;i<=sqrt(n);i++){
        if(n %i ==0){
            isprime=false;
            break;
        }
    }
    if(isprime){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    return 0;
}
