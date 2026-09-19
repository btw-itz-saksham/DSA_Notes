#include<iostream>
using namespace std;

int main(){

    int n; //371
    cout<<"Enter the vale of n"<<endl;
    cin>>n;

    int num =n;
    int cubesum=0;

    while(num>0){
        int lastdigit = num % 10;       // obtaining last digit
        cubesum += lastdigit * lastdigit *lastdigit;   // obtaining cube sum
        num /= 10;                // updating number 
    }

    if(n == cubesum){
        cout<<"The number "<< n<<"is a armstrong number"<<endl;
    }
    else{
        cout<<"The number  "<<n <<" is not an armstrong number"<<endl;
    }

    return 0;
}