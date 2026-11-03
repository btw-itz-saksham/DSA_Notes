#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//Character arrays
//We generally use character arrays to store strings in C++.

int main(){
    //creation of char array using characters 
    char arr[5]={'c','o','d','e','\0'};  //null character is used to terminate the string and also takes a index in array
    
    //in case of int array it returns the memory address of first element of array
    cout<<arr<<endl;  //prints the string till it finds null character


    //in case we store string literal("code") in character array, we don't need to add null character at the end of string. 
    //It is automatically added by compiler.

    //Creation of char array using string literal
    char work[]="Karlo Guyz";  //null character is automatically added at the end of string

    cout<<work<<endl;

    //to find length of string(null character not counted)
    cout<< strlen(work)<<endl;
}