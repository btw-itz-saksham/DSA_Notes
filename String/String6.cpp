#include<iostream>
#include<string>
using namespace std;

//String is a class in c++
//it it part of STL
//String are dynamic in nature, we can change the size of string at runtime
// Strings are mutable and are contiguous in memory


int main(){

    string str = "Saksham";
    cout<<str<<endl;
    str = "goel";  // we can change the value of string at runtime , mutable
    cout<<str<<endl;

    //to take input of string with space, we can use getline() function
    string str1;

    cout<<"Enter a sentence: ";
    getline(cin,str1);  //takes input till enter key is pressed
    cout<<"Your sentence was : "<<str1<<endl;

    //we can access individual characters of string using index, just like char array
    cout<<str[0]<<endl;  //prints first character of string

    //for loop to print all characters of string
    for(int i=0;i<str1.length();i++){
        cout<<str1[i]<<" ";
    }
    cout<<endl;



    // we can also use for each loop to print all characters of string
    for(char ch:str1){
        cout<<ch<<",";
    }
    cout<<endl;


    //member functions of string class
    string str2 = "Hello World";
    cout<<str2.length()<<endl;  //returns length of string
    cout<<str2.size()<<endl;  //returns size of string

    cout<<str2[3]<<endl;  //returns character at index 3
    cout<<str2.at(3)<<endl;  //returns character at index 3

    cout<<str2.substr(0,5)<<endl;  //returns substring from index 0 to 5

    cout<<str2.find("World")<<endl;  //returns index of first occurrence of substring "World"
    cout<<str2.find("world")<<endl;  //returns npos if substring

    return 0;
}