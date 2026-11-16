#include<iostream>
using namespace std;

//left shift operator <<
//right shift operator >>

int main(){

    int a =7 ; // 0111 in binary

    //Left shift     7 << 2  == 7 * 2^2 = 28                   7 << 1 == 7 * 2^1 = 14
    cout << "Left shift of " << a << " by 1 is: " << (a << 1) << endl; // 1110 in binary, which is 14 in decimal
    cout << "Left shift of " << a << " by 2 is: " << (a << 2) << endl; // 1110 in binary, which is  in decimal

    //right shift    7 >> 2  == 7 / 2^2 = 1                    7 >> 1 == 7 / 2^1 = 3
    cout << "Right shift of " << a << " by 1 is: " << (a >> 1) << endl; // 0011 in binary, which is 3 in decimal
    cout << "Right shift of " << a << " by 2 is: " << (a >> 2) << endl; // 0001 in binary, which is 1 in decimal

    return 0;
}