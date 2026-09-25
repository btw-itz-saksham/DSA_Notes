#include<iostream>
#include <string>
using namespace std;

// Inheritance 

class Animal{
    public:
    string color;
    void eat(){
        cout<<"eats\n";
    }
    void breathe(){
        cout<<"breathes\n"; 
    }
};

//Fish inherited properties of animal class
// private members are never inherited in any scenerio
//private members can be inherited by derived class when used protected
// with public u can acces all methods of parent class except private

class Fish : public Animal{
    public:
    int fins;

    void swim(){
        cout<<"swims\n";
    }
};

int main(){

    Fish f1;
    f1.fins=3;
    f1.color="golden"; 
    f1.eat();
    f1.breathe();

    return 0;
}