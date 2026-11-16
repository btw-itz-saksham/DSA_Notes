#include<iostream>
using namespace std;


// getting ith bit of a number
// we use bitmask to get the ith bit of a number

int getIthBit(int num, int i){

    int bitmask = 1 << i; 

    if(!(num & bitmask)){
        return 0; //if ith bit is 0 then return 0
    }
    else{
        return 1; //if ith bit is 1 then return 1
    }

}

int main(){

    int num = 6; // 0110 in binary
    int i = 2; // we want to get the 2nd bit of the number

    //bitmask 1 = 0001
    //left shift the bitmask by i positions to get the ith bitmask        1 << i

    // 00000001 << 0 = 00000001   
    // 00000001 << 1 = 00000010    1st position
    // 00000001 << 2 = 00000100    2nd position
    // 00000001 << 3 = 00001000    3rd position



    // we first take the 1 << ith position 
    //then we do num & mask to get the ith bit of the number
    //if the ith bit is 1 then the result will be non-zero else it will be zero


    cout<<getIthBit(num, i)<<endl; 

    return 0;
}