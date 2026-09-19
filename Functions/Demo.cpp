#include <iostream>
using namespace std;

int num=19;          //global variable num is declared and initialized with value 19. Scope of global variable is throughout the program.

void Hello(){              //simple function with return type none
    cout<<"Hello how are you";
}


int add(int a,int b){        // making function by passing parameters into it and return type int.
    Hello();                // calling another function from this function
    return a+b;
}

int diff(int a , int b){          //Scope of local bariable a and b is only inside the function diff.
    return a-b;
}

void evenodd(int n){         
    if(n%2==0){
        cout<<"even";
    }else{
        cout<<"ODD";
    }
}

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int Binomialcoff(int n ,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

bool isprime(int n){         // for prime numbers
    if(n == 1 ){
        return false;
    }

    for(int i =2 ; i*i <=n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void allprimes(int n){       // prime from 2 to n
    for(int i = 2; i <= n; i++){
        if(isprime(i)){
            cout << i << " ";
        }
    }
}

//Before calling any function from the main function ,it had to be declared above the main branch:-forward declaration

int main(){            //Execution starts from main function.

    cout<<endl<<"sum="<<add(2,5);         // function calling from main method;//by passing 2 and 5 as arguments
    cout<<endl<<"diff="<<diff(5,2)<<endl;
    evenodd(8);
    cout<<endl<<"factorial="<<factorial(5)<<endl;
    cout<<Binomialcoff(4,2)<<endl;
    cout<<isprime(7)<<endl;
    allprimes(20);

    return 0;
}


//All the functions and there parameters are stores in the stack memory in the stack frame.
//when the function is called it is executed and after execution the control is returned to the calling function and the memory allocated for that function is deallocated(empty).