#include<iostream>
using namespace std;

//Reverse an array using 2 pointer approach ; O(1) space complixicity and O(n) space complixicity.
    
void printarray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}


int main(){

    int arr[]={5,4,3,9,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Original array : ";
    printarray(arr,n);
    cout<<endl;

    int start = 0;          // initial pointer
    int end = n - 1;      // final pointer

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"Reversed array : ";
    printarray(arr,n);        // reversed array

    return 0;
}
