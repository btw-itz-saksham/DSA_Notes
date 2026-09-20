#include<iostream>
#include<string>
using namespace std;

// shallow copy and deep copy

class Car{
    public:
    string name;
    string color;
    int *milage;

    Car(string name , string color){
        this->name=name;          // static allocation
        this->color=color;

        milage = new int;         // dynamic allocation
        *milage =12;
    }

    // copy constructor
    // Car (Car &original){
    //     cout<<"Copying original to new"<<endl;
    //     name=original.name;
    //     color=original.color;

    //     milage=original.milage;        // this points to address of milage 
    // }



    // deep copy
    Car (Car &original){        
        cout<<"Copying original to new"<<endl;
        name=original.name;
        color=original.color;

        milage = new int;              // this creates a new memory location
        *milage = *original.milage;    // this copies the value from the original
    }


};


int main(){
    Car c1("Maruti 800","red");

    Car c2(c1);

    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<"milage of c2:"<<*c2.milage<<endl;       // shallow copy 

    cout<<"milage of c1:"<<*c1.milage<<endl;

    *c2.milage = 10;     // we had changed c2 milage but c1 will also change because both c1 and c2 are pointing to same memory
                         // location due to creating of shallow cipy by the copy constructor;
    cout<<"milage of c1:"<<*c1.milage;    //10(when shallow copy)


    //now when we had created deep copy there is seperate copy for milage in 
    //c1 and c2 which are pointing towrrads 2 different location 


}
