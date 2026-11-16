#include<iostream>
using namespace std;

//1's complement operator      ~
//2's complement operator      ~ + 1

int main(){

    //we use not operator to get 1's complement of a number


    int a = 6; // 0101 in binary    
    cout << "1's complement of " << a << " is: " << ~a << endl; // 1010 in binary, which is -7 in decimal

    //here  we got -7 as when we convert 00000101 into 1's compliment then 11111010 is the answer
    //but rightmost is msb and a signed which which is 1 tehrefore negative number
    //for mangnitube we again ake 1's compliment of 11111010 which is 00000101 and add 1 to it which is 00000110
    //so the answer is -7

    return 0;
}