#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    // // This this we are just reversing the digits of a number by printing them one by one.
    // while(n>0){
    //     int lastdigit=n%10;
    //     cout<<lastdigit;
    //     n=n/10;
    // }
    // return 0;


    //In this logic we are creaing  a new reversed number and printing a result.
    int newnum=0;
    while(n>0){
        int lastdigit = n % 10 ;
        newnum=(newnum*10)  + lastdigit;
        n=n/10;
    }

    cout<<newnum;
    return 0;
}