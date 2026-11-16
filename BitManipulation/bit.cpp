#include<iostream>
using namespace std;

//bitwise operators

int main(){

    
    int a = 5; // 0101 in binary
    int b = 3; // 0011 in binary

    //bitwise AND operator &
    int c = a & b; // 0001 in binary, which is 1 in decimal
    cout << "Bitwise AND of " << a << " and " << b << " is: " << c << endl;


    //bitwise OR operator |
    int d = a | b; // 0111 in binary, which is 7 in decimal
    cout << "Bitwise OR of " << a << " and " << b << " is: " << d << endl;


    //bitwise XOR operator ^        same->0   diff->1
    int e = a ^ b; // 0110 in binary, which is 6 in decimal
    cout << "Bitwise XOR of " << a << " and " << b << "is: " << e << endl;

    //not operator ~
    int f = ~a; // 1010 in binary, which is -6 in decimal
    cout << "Bitwise NOT of " << a << " is: " << f << endl;

    return 0;
}