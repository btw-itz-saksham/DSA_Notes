#include<iostream>
#include <string>
using namespace std;

// Types of Inheritance 

//Single inheritance
// parent class ----> child class

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

class Fish : public Animal{
    public:
    int fins;

    void swim(){
        eat();
        cout<<"swims\n";
    }
};

int main(){

    Fish f1;
    f1.fins=3;
    f1.color="golden"; 
    f1.eat();
    f1.breathe();
    f1.swim();

    return 0;
}