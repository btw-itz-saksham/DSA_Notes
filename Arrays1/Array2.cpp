#include <iostream>
using namespace std;

//Insertion sort  O(n2).
// pick an element from unsorted part and place it correctly in the sorted part.

void insertionsort(int *arr , int n){

    for(int i=1;i<n;i++){
        int current = arr[i];          // key is the element which we want to place in sorted part
        int j=i-1;                 // j is the last index of sorted part
        while(j>=0 && arr[j]>current){  // if key is smaller than j th element then we will shift j th element to right and keep on checking with previous elements
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;              // now we have found the correct position for key so we will place it at j+1 th index.
    }
}

void printarray(int *arr , int n){
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<<",";
    }
}

int main(){

    int arr [] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Original array"<<endl;
    printarray(arr,n);
    cout<<endl;
    insertionsort(arr,n);
    cout<<"Sorted array"<<endl;
    printarray(arr,n);

    return 0;
}