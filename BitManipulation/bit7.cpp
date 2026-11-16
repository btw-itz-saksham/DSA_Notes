#include<iostream>
using namespace std;

// check for the power of 2
//In binary of our poweer of 2 numbers
// we have only one bit set and all other bits are 0

//to check this 
// previous number of our 2,power number is all 1 

//basically 2,4,8,16 are   only one bit 1 , resst 0
// and  1,2,7,15 are       all bits 1, rest 0

bool isPowerOfTwo(int num){

    return (num & (num - 1)) == 0; //if the number is power of 2 then it will have only one bit set and num-1 will have all bits set after that bit
}

int main(){

    int num =8;// 1000 in binary

    cout<<isPowerOfTwo(num)<<endl; 
    return 0;
}