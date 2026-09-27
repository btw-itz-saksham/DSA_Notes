#include<iostream>
using namespace std;

// 2d arrays


int main(){
//        row  column          
    int arr[3][3] = {
        {100,100,100},
        {50,60,70},
        {90,50,67}
    };

    // accessing elements of 2-D array
    cout<<arr[0][0]<<endl; 
    cout<<arr[1][2]<<endl; 
    cout<<arr[2][2]<<endl; 

    return 0;
}