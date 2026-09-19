#include <iostream>
using namespace std;

int main(){

    float income;

    cout<<"Enter your income in lakhs"<<endl;
    cin>>income;

    if(income <=5){
        cout<<"There is no tax on your income"<<endl;
    }
    else if(income >5 && income <=10){
        cout<<"There is 20 percent tax on your income "<<endl;
        cout<<"the amount you had to pay is"<<(income*0.20)+income<<"lakhs"<<endl;
    }
    else if (income >10){
        cout<<"There is 30 percent tax on your income "<<endl;
        cout<<"the amount you had to pay is"<<(income*0.30)+income<<"lakhs"<<endl;
    }

    return 0;
}