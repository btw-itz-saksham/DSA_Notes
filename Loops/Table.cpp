#include <iostream>
using namespace std;

//Multiplicative table of a number n.
int main(){

    int n;
    cout<<"Enter the vake of n"<<endl;
    cin>>n;

    for(int i=1;i<=10;i++){
        cout<<n<<"*"<<i<<"="<<(n*i)<<"\n";
    }
    return 0;
}
