#include <iostream>
using namespace std;

class Student {
    // Properties
    string name;
    float cgpa;
    // methods i.e functions in a class.
    void getpercentage(){
        cout<<(cgpa*10)<<"%"<<"\n";
    }
};

class User{
    int id;
    string username;
    string password;
    string bio;

    void Deactivate(){
        cout<<"Deleting your account"<<endl;
    }
    void editbio(string newbio){
        bio = newbio;
    }

};

int main(){

    int a;  // just like properties of int are in the a 

    Student s1;  // the properties of Student class are in Student s1.
                 // s1 is object
                 // when we create an object space is allocated in the memory for its attributes.
    cout<<sizeof(s1);
    
    return 0;
}