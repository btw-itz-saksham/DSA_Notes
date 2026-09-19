#include <iostream>
#include <string>
using namespace std;

// Getters and Setters
// special methods used to access members of private class inside main.

class Student {

    private:
    string name;
    float cgpa;

    public:
    void getpercentage(){
        cout<<(cgpa*10)<<"%"<<"\n";
    }
    //Setters  (special methods when we dont want to give full access of our attributes to main function)
    void setname(string nameVal){
        name = nameVal;
    }
    void setcgpa(float cgpaVal){
        cgpa = cgpaVal;
    }

    //Getters  (return us the value of setters)
    string getname(){
        return name;
    }
    float getcgpa(){
        return cgpa;
    }
};


int main(){

    Student s1;  

    s1.setname("Saksham goel");       // assigining values  
    s1.setcgpa(9.36);

    cout<<s1.getcgpa()<<endl;        // accessing values of private member
    cout<<s1.getname()<<endl;
    s1.getpercentage();
    
    return 0;
}