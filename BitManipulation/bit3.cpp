#include<iostream>
using namespace std;

//odd or even using bits


//in this way we are extracting the last bit of the number and checking if it is 0 or 1
//bitmask 1 = 0001
// bitmask is the special number which is used to extract the specific bit from the number
bool isEven(int num){
    return (num & 1) == 0; //if last bit is 0 then even else odd
}

int main(){

    int num =5; // 0100 in binary

    cout<<isEven(num)<<endl; // 1 in decimal, which is true

    return 0;
}