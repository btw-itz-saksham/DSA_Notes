#include<iostream>
#include <string>
using namespace std;

// Types of Inheritance 

//multiple inheritance
// base class 1 ----> derived class <---- base class 2

class Teacher{
    public:
    int salary;
    string subject;
};

class Student{
    public:
    float cgpa;
    int rollno;
};

class TA : public Teacher, public Student{
    public:
    string name;
};

int main(){
    TA t1;

    t1.name="John";
    t1.rollno=101;
    t1.salary=50000;
    t1.subject="Maths";


    return 0;
}