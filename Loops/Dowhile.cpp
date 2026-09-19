#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    //This loop execute first iteration without checking.
    //therefore dowhile loop is executed atleast once.
    
    int i=1;
    do{
        cout<<i<<"\t";
        i++;
    }while(i<=n);

    return 0;
}