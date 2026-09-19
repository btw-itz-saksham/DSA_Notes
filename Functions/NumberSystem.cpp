#include <iostream>
#include <cmath>
using namespace std;

//Binary to decimal number system;
void bintodec(int binum){
    int n = binum;
    int decnum=0;
    int pow =1;      

    while(n>0){
        int lastdigit = n % 10 ;
        decnum = decnum + lastdigit * pow;
        pow = pow *2;
        n = n /10;
    }
    cout<<decnum<<endl;
}

//Decimal to binary number system;

void dectobin(int decnum){
    int n = decnum;
    int binum=0;
    int power =1;


    while( n>0){
        int remainder = n % 2;
        binum= binum+ remainder*power;
        n=n/2;
        power=power *10;
    }
    cout<<binum<<endl;
}

int main(){

    bintodec(1011);
    dectobin(12);
    return 0;
}