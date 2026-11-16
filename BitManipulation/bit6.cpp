#include <iostream>
using namespace std;    

//clearing ith bit of a number
// if 0 --> 0
// if 1 --> 0

//for clearing the ith bit we use bitmask and bitwise AND operator

int clearIthBit(int num, int i){

    int bitmask = ~(1 << i); //left shift the bitmask by i positions to get the ith bitmask and then take 1's complement of it

    return num & bitmask; //if ith bit is 1 then it will become 0 else it will remain 0

}

int main(){
    int num = 6; // 0110 in binary
    int i = 2; // we want to clear the 2nd bit of the number

    cout<<clearIthBit(num, i)<<endl;

    return 0;
}