#include<iostream>
using namespace std;

// runtime polymorphism - method overriding
// we can also use  the virtual keyword  for runtime polymorphism.
// virtual keyword is used to tell the compiler that we want to use the derived class method instead of the base class method.
// This is called dynamic binding or late binding. 
// The decision of which method to call is made at runtime.
// it is mandatory to redefine the base class method in the derived class.

class Base{
    public:
    void show(){
        cout<<"Base class show function"<<endl;
    }
    virtual void hello(){
        cout<<"Base class hello function"<<endl;
    }
};
class Derived : public Base{
    public:
    void show(){
        cout<<"Derived class show function"<<endl;
    }
    void hello(){
        cout<<"Derived class hello function"<<endl;
    }
};
int main(){
    Derived d;
    d.show(); // calls Derived class show function and this is decided at runtime.
    d.hello(); // calls Derived class hello function

    Base *b; // base class pointer
    b = &d; // base class pointer points to derived class object
    b->show(); // calls Base class hello function and this is decided at compile time.
    b->hello(); // calls Derived class hello function and this is decided at runtime.
}