#include<iostream>
using namespace std;

//Sorting

//Bubble sort O(n2)
//Compare adjascent elements and swap if i +1 is smaller than i.
//basically push the largest element to the end of the array after each pass.
void bubblesort(int *arr,int n){

    for(int i=0;i<n-1;i++){    // this i is controlling no of passes,
                               // after each pass one largest elemnt will be at the end of the array.
        bool isswapped = false;
        for(int j=0;j<n-i-1;j++){        // this j is comapring adjascent elements and swapping if needed.
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswapped = true;
            }
        }
        //Array is already sorted
        if(isswapped == false){
            break;
        }
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
    bubblesort(arr,n);
    cout<<"\nAfter sorting : \n";
    printarray(arr,n);
    return 0;
}