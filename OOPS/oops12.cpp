#include<iostream>
using namespace std;

//Polymorphism
// compile time-method overloading
// runtime - method overiding

//compile time polymorphism - function overloading and operator overloading
// function overloading
// functions with same name but different parameters are called overloaded functions
class Print{
    public:
    void show(int a){
        cout<<"int: "<<a<<endl;
    }

    void show(double a){
        cout<<"double: "<<a<<endl;
    }

    void show(string a){
        cout<<"string: "<<a<<endl;
    }
};

// in funtion overloading, the function name is same but the parameters are different
// at the time of compilation, the compiler will check the parameters and call the appropriate function/constructor

int main(){
    Print p;
    p.show(5);
    p.show(5.5);
    p.show("Alice");

    return 0;
}