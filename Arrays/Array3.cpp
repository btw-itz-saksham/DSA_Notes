#include <iostream>
using namespace std;

//after all when a array is passed in a function it is converted into pointer

void  func(int arr[]){          //same
    arr[0]=1000;
}   

void func1(int *arr){           //same
    arr[0]=1000;
}

int printarr(int nums[], int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

//Array can be converted into pointer

int main(){

    int a=5;         // this is the nomal variable
    int *ptr=&a;
    cout<<ptr<<endl;;     

    
    int arr[]={3,7,1,9};
    int *ptr1=arr;
    cout<<ptr1<<endl;      // prints the address of the first element of the array
    cout<<arr<<endl;     // prints the address of the first element of the array or 0th index
    cout<<*arr<<endl;     //arr[0]
    cout<<*(arr+1)<<endl;  // arr[1]  // prints the value of the second element of the array or elemnt at 1st index

    func(arr);      // passing array name is equivalent to passing  pointer
    cout<<arr[0]<<endl;   // prints 1000 because we have changed the value of the first element of the array in the function
    cout<<arr[0+1]<<endl; 

    func1(arr);     // same as func(arr) because array name is converted into pointer
    cout<<arr[0]<<endl;   // prints 1000 because we have changed

    printarr(arr,4);   // passing array name is equivalent to passing pointer and size of the array

    return 0;
}