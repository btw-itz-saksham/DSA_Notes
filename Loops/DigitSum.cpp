#include <iostream>
using namespace std;

//Sum of digits of a number using while loop.

int main(){

    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int sum=0;

   while(n>0){

        int lastdigit= n % 10 ;
        cout<<lastdigit<<" \n";
        sum = sum + lastdigit ;
        n = n/10 ;
    }
    cout<<sum<<endl;

    return 0;
}