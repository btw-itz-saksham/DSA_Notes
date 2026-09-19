#include<iostream>
#include<vector>
using namespace std;

// merge sort
// divide and conquer

void merge(int arr[], int start , int mid , int end){        //O(n)
    vector<int> temp;
    int i=start;
    int j= mid +1;

    while (i<=mid && j <=end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i<=mid){
    temp.push_back(arr[i++]);
    }
    while (j<=end){
    temp.push_back(arr[j++]);
    }
    
    // vector elements to original array

    for (int i = start , x=0; i <= end; i++){               
        arr[i]=temp[x++];
    }
}


//O(log n) dividing the arrays

void mergesort(int arr [] , int start , int end ){

    int mid=(start+end)/2;      // calculating the middle index

    if(start>=end){             // base case if end crosses start
        return;
    }

    //recursive calling of mergesort function
    mergesort(arr,start,mid);      // left half call
    mergesort(arr,mid+1,end);      // right half call


    merge(arr,start,mid,end);     // conquer step
}

void printarr(int arr [],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}

int main(){
    int arr[] = {6,3,7,5,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printarr(arr,n);
    cout<<endl;
    mergesort(arr,0,n-1);
    printarr(arr,n);
    return 0;
}