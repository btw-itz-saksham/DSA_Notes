#include<iostream>
#include<string>
using namespace std;

// constructor-special method invoked at time of object creation
// does not have a return type
// same name as class
// only called once 
// used for initialising values called attributes at time of object creation.



class Car{
    private:
    string name;
    string color;

    public:

    Car(){         //  default constructor
        cout<<"constructor without parameters"<<endl;
    }

    // Car(string namevalue , string colorvalue){         // constructor
    //     cout<<"constructor is called. Object being created"<<endl;
    //     name = namevalue;
    //     color = colorvalue;
    // }
    
    // the above thing can also be done using this keyword where this refers to current object
    Car(string name , string color){         //  parameterized constructor
        cout<<"constructor with parameters"<<endl;
        this->name = name ;
        this->color = color;
    }

    //Custom copy constructor
    Car (Car &original){
        cout<<"Copying original to new"<<endl;
        name=original.name;
        color=original.color;
    }

// Since we have 3 constructors with different parameters, this is called constructor overloading.


    void start(){
        cout<<"Car is starting"<<endl;
    }
    void stop(){
        cout<<"Car is stopping"<<endl;
    }

    //Getter for name
    string getname(){
        return name;
    }
    string getcolor(){
        return color;
    }
};

int main(){

    Car c0;             // default constructor is called

    Car c1("bmw","red");       // memory allocation at runtime , parameterized constructor is called
                               // at runtime it is decided which constructor to call based on the parameters passed.

    c1.start();
    cout<<"The name of car is :"<<c1.getname()<<endl;
    cout<<"The color of the car is :"<<c1.getcolor()<<endl;


    Car c2(c1);             //copy of car c1      // c++ called an copy constructor by default
    cout<<c2.getname()<<endl;
    cout<<c2.getcolor()<<endl;
    

    return 0;
}