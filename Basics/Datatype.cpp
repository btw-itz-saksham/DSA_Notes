#include <iostream>
using namespace std;

//Dataype are 2 type primitive and non primitive
//primitive datatypes are int, char, float, double, bool
//Non primitive datatypes are String ,array, class,pointer

int main(){

    int age =25;          // 4 bytes
    float pi =3.14;       // 4 bytes
    double e =2.718;      // 8 bytes
    char grade ='A';      // 1 byte//8 bits
    bool isTrue = true;   // 1 byte//8 bits

    cout <<"The size of int is  "<< sizeof(int);     // this way we can size of any datatype.
    return 0;
}