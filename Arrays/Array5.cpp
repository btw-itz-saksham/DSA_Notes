#include <iostream>
using namespace std;

//Reverse an array using extra spaces ; O(n)and O(n) time and space complixicity.


void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}

//We are traversing the copy array forwaredly and copying the elemnets from the original array to the copy array in the reverse order(i.e traversing original array reversely) 
//and then overwrite that copy array in the original array.
int main(){

    int arr[]={5,4,3,9,2};
    int n = sizeof(arr)/sizeof(arr[0]);


    int copyARR[n];         
    for(int i=0 ; i<n ; i++){
        int j = n-i-1 ;
        copyARR[i] = arr[j];    // copy reversed array formed of original array
    }

    for(int i =0 ; i<n ; i++){      //overwriting the original array to the copy array to make it reverse.
        arr[i]=copyARR[i];
    }

    printarray(arr,n);

    return 0;
}