#include <iostream>
#include <cstring>     // build in library that provides functions to work with char arrays
#include <string>
using namespace std;


// c string functions 


int main(){

    char str1 [100];
    // str1="SakshamGoel";             we cannot do this directly because str1 is a char array and we cannot assign string literal to it.
    strcpy(str1,"abc");      // we can use strcpy() function to copy string literal to char array. It takes 2 arguments, 1-destination array, 2-source string literal.
    cout<<str1<<endl;


    char str2 [100] ="xyz";
    strcat(str2,str1);                // we can use strcat() function to concatenate 2 char arrays. It takes 2 arguments, 1-destination array, 2-source array.
    cout<<str2<<endl;
    cout<<str1<<endl;                 // str1 remains unchanged because it is the source array.


    char str3[100] ="xyz";

    cout<<strcmp(str2,str3)<<endl;    // we can use strcmp() function to compare 2 char arrays. It takes 2 arguments, 1-first array, 2-second array. 
                                      //It returns 0 if both arrays are equal, 
                                      //a negative value if first array is less than second array, 
                                      //and a positive value if first array is greater than second array.

    
    return 0; 
}