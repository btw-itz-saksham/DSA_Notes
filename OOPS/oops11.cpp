#include<iostream>
using namespace std;

// Types of inheritance
// hierarchial inheritance
// base class --> child class, child class, child class

// there is one more called hybrid where 2 or more inheritance got combined

class Animal{
    public:
    void eat(){
        cout<<"eating"<<endl;
    }

    void breathe(){
        cout<<"breathing"<<endl;
    }
};

class Bird : public Animal{
    public:
    void fly(){
        cout<<"i can fly"<<endl;
    }
};

class Fish : public Animal{
    public:
    void swim(){
        cout<<"i am swim"<<endl;
    }
};

class Mammal : public Animal{
    public:
    void walk(){
        cout<<"i can walk too"<<endl;
    }
};

int main(){

    Bird b1;
    b1.eat();
    b1.breathe();
    b1.fly();

    return 0;
}