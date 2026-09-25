#include<iostream>
using namespace std;

// static keyword

//static variable - a variable that is shared among all objects of a class. 
//It is initialized only once and its value is retained between function calls. 
//It is also called class variable. not object variable,
//It is used to store the common property of all objects of a class.
// It can be accessed by using the class name and the scope resolution operator (::).
// It can also be accessed by using the object of the class.

class Example{
    public:
    static int x ;
};

int Example::x = 0;    // initializing static variable x outside the class

// void Counter(){
//     int count = 0; // static variable
//     count++;
//     cout<<"Count: "<<count<<endl;
// }

void Counter(){
    static int count = 0; // static variable
    count++;
    cout<<"Count: "<<count<<endl;
};

int main(){
    // Counter(); // Count: 1
    // Counter(); // Count: 1

    Counter(); // Count: 1
    Counter(); // Count: 2
    Counter(); // Count: 3

    Example e1, e2, e3;

    cout<<e1.x++<<endl;
    cout<<e2.x++<<endl;
    cout<<e3.x++<<endl;

    return 0;
}