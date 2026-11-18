#include<iostream>
using namespace std;

// a function repeatedly calls itself until it reaches a base case. This is called recursion.


//function with no base case ,, therefore infinite recursion will occur
void func(){
    cout<<"function calling itself"<<endl;
    func(); // recursive call
}


int main(){

    // func();

    

    return 0;
}