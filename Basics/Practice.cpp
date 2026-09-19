#include <iostream>
using namespace std;

int main(){

    int num1 , num2 ;
    char op;

    cout<<"Enter the value of num1"<<endl;
    cin>>num1;

    cout<<"Enter the  value of num2"<<endl;
    cin>>num2;

    cout<<"Enter the operation(+,-,/,*,%)"<<endl;
    cin>> op;

    if(op == '+'){
        cout<<"The sum of num1 and num2 is "<<num1 + num2 <<endl;
    }
    else if(op == '-'){
        cout<<"The difference of num1 and num2 is "<<num1 - num2 <<endl;
    }
    else if(op == '/'){
        cout<<"The devide of num1 and num2 is "<<num1 / num2 <<endl;
    }
    else if(op == '*'){
        cout<<"The product of num1 and num2 is "<<num1 * num2 <<endl;
    }
    else if(op == '%'){
        cout<<"The remainder of num1 and num2 is "<<num1 % num2 <<endl;
    }

    switch(op){
        case '+':cout<<"";
    }

    return 0;
}