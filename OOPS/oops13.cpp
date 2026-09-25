#include<iostream>
using namespace std;

//compile time polymorphism - function overloading and operator overloading
//operator overloading
class Complex{
    private:
    int real;
    int imag;

    public:
    Complex(int r, int i){
        real = r;
        imag = i;
    }   

    // operator overloading
    //   operator keyword
    void operator + (Complex const &c){
        int r = this->real + c.real;
        int i = this->imag + c.imag;
        Complex result(r, i);
        result.display();
    }
    void operator - (Complex const &c){
        int r = this->real - c.real;
        int i = this->imag - c.imag;
        Complex result(r, i);
        result.display();
    }

    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};

int main(){
    Complex c1(3, 2);
    Complex c2(1, 7);
    
    c1.display();
    c2.display();

    c1 + c2; // operator overloading
    c1 - c2; // operator overloading
    
    return 0;
}