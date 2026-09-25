#include<iostream>
using namespace std;

// Abstraction

//abstract class
class Shape{
    public:
    virtual void draw() = 0; // pure virtual function because it has no implementation. It is declared by using the virtual keyword and assigning it to 0 at declaration.
};

class Circle : public Shape{
    public:
    void draw(){
        cout<<"Drawing Circle"<<endl;
    }
};

class Square : public Shape{
    public:
    void draw(){
        cout<<"Drawing Square"<<endl;
    }
};

int main(){
    // cannot made objects of abstract class

    Circle c;
    c.draw(); // calls Circle class draw function
    
    Square s;
    s.draw(); // calls Square class draw function
    return 0;
}