#include<iostream>
using namespace std;

// static keyword

//static object - a variable that is shared among all objects of a class. 


class Example{
    public:
    Example(){
        cout<<"Constructor called"<<endl;
    }
    ~Example(){
        cout<<"Destructor called"<<endl;
    }
};




int main(){
    
    int a =0;
    if(a==0){
        static Example e1; // constructor called
    } // destructor called

    cout<<"End of main function"<<endl;
    return 0;
}