#include <iostream>
#include <string>
using namespace std;

// Access modifiers
// public- to access the methords of a class from anywhere it should be 
// private- for only inside class is  , also default and in friend class function
// protected- for inside class and derived class 

class Student {

    public:

    string name;
    float cgpa;

    void getpercentage(){
        cout<<(cgpa*10)<<"%"<<"\n";
    }
};


int main(){

    Student s1;  
    // defining attributes
    s1.name="Saksham goel";
    s1.cgpa=9.36;
    // accessing attributes and methods of student class
    cout<< s1.name<<endl;
    cout<< s1.cgpa<<endl;
    s1.getpercentage();
    return 0;
}