#include <iostream>
using namespace std;

int main(){

    //Creating of array 3 methods.

    int marks [] ={1,2,3,4,5}; // declaring and initializing an array of size 5
    int marks1[20];       // declaring an array of size 20 // 0-19 index. // garbage values in it.
    int marks2[5] = {1,2}; // declaring and initializing an array of size 5 // 0-4 index. // 1,2 in first two index and rest are garbage values in it.


    cout<<marks[3]<<endl;  // accesing elements of array through index.

    cout<<marks1[0]<<endl; // random garbage value as we have not initialized it.

    cout<<marks2[1]<<endl; 
    cout<<marks2[2]<<endl; // all other index are iniliatised as 0 as we had initilized first two index and rest are not initialized so they are 0.


    cout<<sizeof(marks)<<endl; // size of array in bytes. // 5*4 = 20 bytes as int is 4 bytes.
    cout<<sizeof(marks)/sizeof(marks[0])<<endl;//length of array 

    return 0;
}