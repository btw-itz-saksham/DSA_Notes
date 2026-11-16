#include <iostream>
using namespace std;

//fast exponentiation

//standardly we calculate a^b in O(n)time complexity but we can do it in O(log n time complexity using fast exponentiation

//to impliment this we can use the following logic
//if b is the power of a then
//lets say 3^5
//then we take binary of 5 which is   0    1   0    1
//then we assign base 3               3^8  3^4  3^2  3^1
//then we multiply the base with the result only when the bit is 1
//eventually we get 3^5

void fastExpo (int a, int n){
    int ans =1;
    
    while(n>0){
        int last_bit = (n & 1); //get the last bit of the number
        if(last_bit){ //if the last bit is 1 then multiply the base with the result
            ans *= a;
        }
        a *= a; //square the base
        n = n >> 1; //right shift the number to get the next bit

    }
    cout << ans << endl;
}


int main(){

    int a = 2; //base
    int n = 10; //exponent

    fastExpo(a, n); //call the function to calculate a^n

    return 0;
}