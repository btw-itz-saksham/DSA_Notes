#include<iostream>
#include <string>
using namespace std;

// Types of Inheritance 

//multlevel inheritance
// parent class ----> child class  ----> child class

class Animal{
    public:

    void eat(){
        cout<<"eats\n";
    }
    void breathe(){
        cout<<"breathes\n"; 
    }
};

class mammal : public Animal{
    public:
    string bloodtype;

    mammal(){
        bloodtype="warm";
    }
};

class Dog : public mammal{
    public:
    void tailwag(){
        cout<<"a dog wags its tail"<<endl;
    }
};



int main(){

    Dog d1;
    d1.eat();
    d1.breathe();
    d1.tailwag();
    cout<<"bloodtype of dog:"<<d1.bloodtype<<endl;

    return 0;
}