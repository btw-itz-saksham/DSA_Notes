#include<iostream>
#include <climits>
using namespace std;

// counting sort O(n+k) where k is the range of input elements
// basically this algo is good for questions where range is very less.

void countingsort(int arr[],int n){

    int freq[1000]={0};    // range of frequency array
    int minvalue=INT_MAX, maxvalue = INT_MIN;
    for(int i=0;i<n;i++){
        minvalue=min(minvalue,arr[i]);         // least value in arr
        maxvalue=max(maxvalue,arr[i]);        // max value in arr
    }

    //1st step
    for(int i=0;i<n;i++){
        freq[arr[i]]++;        // arr[i] ke values as index treat honge freq arr ke
    }

    for(int i=minvalue ,j=0 ; i<=maxvalue ; i++){
        while(freq[i]>0){ 
            arr[j++]=i;    //j original array mein next empty position batata hai jahan sorted value daalni hai.
            freq[i]--; 
        }
    }

}


void printarr(int *arr , int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<",";
    }
}

int main(){

    int arr[]={1,4,1,3,2,4,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    printarr(arr,n);
    countingsort(arr,n);
    cout<<endl;
    printarr(arr,n);
}