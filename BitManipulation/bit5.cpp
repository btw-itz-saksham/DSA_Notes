#include<iostream>
using namespace std;

// setting ith bit of a number
// if 0 --> 1
// if 1 --> 1

//for setting the ith bit we use bitmask and bitwise OR operator

int setIthBit(int num, int i){

    int bitmask = 1 << i; //left shift the bitmask by i positions to get the ith bitmask

    return num | bitmask; //if ith bit is 0 then it will become 1 else it will remain 1

}

int main(){
    int num = 6; // 0110 in binary
    int i = 3; // we want to set the 3rd bit of the number

    cout<<setIthBit(num, i)<<endl;

    return 0;
}