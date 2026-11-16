#include<iostream>
using namespace std;

//update ith bit of a number


void updateIthBit(int num , int i , int val){

    num = num & ~(1 << i); //clear the ith bit of the number
    num = num | (val << i); //set the ith bit of the number to val
    cout<<num<<endl;
}

//clear last ith bit of a number
//here we want a bitmass where all bits are 1 except the last ith bit which is 0
//for this we can take ~0 << i                ,, where ~0 is all bits 1 and left shift it by i positions to get the last ith bit 0 and all other bits 1
void clearLastIthBit(int num , int i){

    int bitmask = ~0 << i; //left shift the bitmask by i positions to get the last ith bitmask
    num = num & bitmask; //if last ith bit is 1 then it will become 0 else it will remain 0

    cout<<num<<endl;
}


int main(){

    updateIthBit(5, 1, 1); // 0101 in binary, we want to update the 1st bit to 1, so the result will be 0111 in binary which is 7 in decimal
    clearLastIthBit(5, 1); // 0101 in binary, we want to clear the last 1st bit, so the result will be 0100 in binary which is 4 in decimal
    return 0;
}