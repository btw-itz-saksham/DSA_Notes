#include <iostream>
using namespace std;

//char datatype: 1-byte


int main(){
    
    char ch = 'A';
    char ch1 = 65; 
    char ch2 ='a';
    char ch3 ='50';
    char ch4 ='%';
    char ch5 ='\n';     // these are considered as 1


    cout<<(int)ch<<endl;  //ASCII value of 'A' is 65 and 'a' is 97
    cout<<(int)ch2<<endl; 

    //To get position of character in alphabet, we can subtract the ASCII value of 'a' from the character.
    char ch6 ='f';
    int pos=ch6-'a';
    cout<<pos<<endl;  
    return 0;
}
