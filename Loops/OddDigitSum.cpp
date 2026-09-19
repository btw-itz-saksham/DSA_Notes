#include <iostream>
using namespace std;

//Sum of odd digits of a number using while loop

int main(){

    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int sum=0;

    while(n>0){
        int lastdigit= n % 10 ;
        if(lastdigit % 2 != 0){
            cout<<lastdigit<<" \t"<<endl;
            sum=sum+lastdigit;
        }
        n=n/10;

    }
    cout<<"sum ="<<sum;
    return 0;
}
