#include <iostream>
using namespace std;

//Selection sort  O(n2)
// pick the smallest element and push it in the start of the array.

void selectionsort(int *arr , int n){

    for(int i=0;i<n-1;i++){
        int minidx=i;              // assuming that smallest element at i th index in the start
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minidx])           // comparing min index element with j
            minidx=j;                          // update minidx when we get a j th  element smaller than minidx
        }
        swap(arr[i],arr[minidx]);              // swap min idx element with  element at i ,, now start will be sorted, then i=1 in pass 2
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

    printarray(arr,n);
    selectionsort(arr,n);
    cout<<endl;
    printarray(arr,n);

    return 0;
}