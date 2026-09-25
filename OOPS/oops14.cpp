#include<iostream>
using namespace std;

// runtime polymorphism - method overriding
// here, we have a base class and a derived class. The derived class overrides the method of the base class.
class Base{
    public:
    void show(){
        cout<<"Base class show function"<<endl;
    }
};
class Derived : public Base{
    public:
    void show(){
        cout<<"Derived class show function"<<endl;
    }
};
int main(){
    Derived d;
    d.show(); // calls Derived class show function and this is decided at runtime.
}