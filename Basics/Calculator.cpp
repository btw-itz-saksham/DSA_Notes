#include <iostream>
using namespace std;

int main(){

    int num1,num2;
    char op;

    cout<<"Enter the value of num1"<<endl;
    cin>>num1;

    cout<<"Enter the value of num2"<<endl;
    cin>>num2;

    cout<<"Enter the operator(+.-,*,/,%)"<<endl;
    cin>>op;

    //using if else
    if(op == '+'){
        cout<<"The sum of num 1 and num2 is"<< num1 + num2<<endl;
    }
    else if(op == '-'){
        cout<<"The difference of num 1 and num2 is"<< num1 - num2<<endl;
    }
    else if(op == '*'){
        cout<<"The product of num 1 and num2 is"<< num1 * num2<<endl;
    }
    else if(op == '/'){
        cout<<"The division of num 1 and num2 is"<< num1 / num2<<endl;
    }
    else if(op == '%'){
        cout<<"The remainder of num 1 and num2 is"<< num1 % num2<<endl;
    }
    else{
        cout<<"Enter valid operator";
    }

    //Switch case

    switch(op){
        case '+':cout<<"The sum of num 1 and num2 is"<< num1 + num2<<endl;
        break;
        case '-':cout<<"The difference of num 1 and num2 is"<< num1 - num2<<endl;
        break;
        case '*':cout<<"The product of num 1 and num2 is"<< num1 * num2<<endl;
        break;
        case '/':cout<<"The division of num 1 and num2 is"<< num1 / num2<<endl;
        break;
        case '%':cout<<"The remainder of num 1 and num2 is"<< num1 % num2<<endl;
        break;
        default:cout<<"Enter valid operator";

    }
    

    return 0;
}