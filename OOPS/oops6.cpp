#include<iostream>
#include<string>
using namespace std;

// Destructor- deallocate memory to an object
// when object is out of scope destructor is automatically called.

class Car{
    public:
    string name;
    string color;
    int *milage;

    Car(string name , string color){
        this->name=name;          
        this->color=color;

        milage = new int;       // dynamic allocation
        *milage =12;
    }

    // deep copy
    Car (Car &original){        
        cout<<"Copying original to new"<<endl;
        name=original.name;
        color=original.color;

        milage = new int;              // this creates a new memory location
        *milage = *original.milage;    // this copies the value from the original
    }

    // creating destructor
    ~Car(){
        cout<<"Deleting object "<<endl;
        if(milage != NULL){
            delete milage;
        }
    }


};


int main(){
    Car c1("Maruti 800","red");

    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<c1.milage<<endl;    // automatically destructor called

    return 0;
}
