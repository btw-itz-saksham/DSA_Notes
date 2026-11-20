#include<iostream>
#include<vector>
using namespace std;

//performing merge sort to sort an array of strings

void merge(string arr[], int start , int mid , int end){

    int i=start;
    int j= mid +1;

    vector<string> temp;

    while(i<=mid && j<=end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=end){
        temp.push_back(arr[j++]);
    }

    for(int idx=0, x=start; x<=end; x++) {
        arr[x] = temp[idx++];
    }


}

void mergesort(string arr[], int start , int end){
    if(start>=end){             // base case 
        return;
    }
    int mid=(start+end)/2;      // calculating the middle index

    mergesort(arr,start,mid);      // left half call
    mergesort(arr,mid+1,end);      // right half call

    merge(arr,start,mid,end);     // conquer step
}

int main(){

    string arr[]={"sun","earth","mercury","mars","jupiter"};

    mergesort(arr,0,4);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<",";
    }

    return 0;
}




//devide and conquer  question 3 left in assignment 