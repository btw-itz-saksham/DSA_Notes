#include<iostream>
using namespace std;

//extra questions

//Write a Function to clear the range of bits from i to j in a given number.

void clearRangeOfBits(int num, int i, int j){
    
    int a = (~0) << (j + 1); //left shift the all 1's by j+1 positions to get the left part of the mask
    int b = (1 << i) - 1; //left shift 1 by i positions and subtract 1 to get the right part of the mask

    int mask = a | b; //combine the left and right part of the mask using OR operator
    num = num & mask; //clear the range of bits from i to j in the given number using AND operator

    cout << num << endl; //print the result

}

int main(){

    clearRangeOfBits(31, 1, 3); //clear the range of bits from 1 to 3 in the number 31


    // here a = 11111111 before left shift
    // after left shift by j+1 = 3+1 = 4 positions we get a = 11110000
    // here b = 00000001 before left shift
    // after left shift by i = 1 positions we get b = 00000010
    // then we subtract 1 from b to get b = 00000001    ,, -1 ka kaam hai right side ke mask mein i-th bit tak saare lower bits ko 1 banana.
    // then we combine a and b using OR operator to get the mask = 11110001
    // then we do num & mask to clear the range of bits from 1 to 3 in the number 31 which is 11111 in binary

    return 0;
}