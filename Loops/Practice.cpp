#include <iostream>
using namespace std;

int main(){

    int number ;
    cout<<"Enter the number you want to be reversed"<<endl;
    cin>>number;
    int reversed = 0 ;


    while(number>0){
       int  lastdigit = number % 10;
       reversed = reversed *10 + lastdigit ;
       number = number /10 ;
    }

    cout<<reversed ;

    return 0;
}