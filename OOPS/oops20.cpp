#include<iostream>
using namespace std;

//practice quesion - constructor and destructor order of execution in inheritance

class Parent{
    public:
    Parent(){
        cout<<"Parent class constructor"<<endl;
    }
    ~Parent(){
        cout<<"Parent class destructor"<<endl;
    }
};

class Child :public Parent{
    public:
    Child(){
        cout<<"Child class constructor"<<endl;
    }
    ~Child(){
        cout<<"Child class destructor"<<endl;
    }
};


int main(){
    Child c1;   // first parent class constructor is called and then child class constructor is called
               //but when the object is destroyed, first child class destructor is called and then parent class destructor is called

}