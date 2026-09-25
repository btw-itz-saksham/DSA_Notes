#include <iostream>
using namespace std;

// friend function - it is  is not a member of a class 
//but has access to the private and protected members of the class.


class A{
    private:
    string secret="secret data";
    friend class B; // friend class B can access private members of class A
    friend void revealSecret(A &obj); // friend function can access private members of class A
};

class B{
    public:
    void showSecret(A &obj){
        cout<<obj.secret<<endl;
    }
};

void revealSecret(A &obj){
    cout<<obj.secret<<endl;
}


int main(){
    A a1;
    B b1;

    b1.showSecret(a1); // calls B class showSecret function and this is decided at runtime.
    revealSecret(a1); // calls the friend function revealSecret
    return 0;
}