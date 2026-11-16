#include<iostream>
using namespace std;

//counting set bits in a binary number

int countSetBits(int num){

    int count = 0;

    while(num > 0){
        if(num & 1){ //if the last bit is 1 then increment the count
            count++;
        }
        num = num >> 1; //right shift the number by 1 to check the next bit
    }

    return count;
}

int main(){

    int num = 13; // 1101 in binary
    cout<<countSetBits(num)<<endl; //3 

    return 0;
}