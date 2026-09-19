#include<iostream>
using namespace std;

int main(){

    //This is implicit typecasting/type promotion which is done by the compiler automatically.This prevent data loss.
    cout<<(10/3)<<endl;  //3
    cout<<(10/3.0)<<endl; //3.33333
    //complier automatically promote 'A'(char) to int and then perform addition.
    cout<<('A'+5)<<endl;  //70 because 'A' is 65 in ASCII and 65+5=70


    //This is exlicit typecasting/type conversion which is done by the programmer explicitly. 
    //This may cause data loss if we are converting from a higher data type to a lower data type.

    cout<<(int)3.14<<endl; //3
    cout<<(char)70<<endl;  //F because 70 is F in ASCII
    cout<<(int)'B'<<endl;  //66 because 'B' is 66 in ASCII


    return 0;
}