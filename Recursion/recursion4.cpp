#include<iostream>
using namespace std;

//search in a rotated sorted array using recursion
int search(int arr[],int start,int end,int key){
    
    if(start>end){        // base case
        return -1;
    }

    int mid=start+(end-start)/2;     // getting the mid element

    if(arr[mid] == key){             // return mid if key is found
        return mid;
    }

    //left half is sorted
    if(arr[start] <= arr[mid]){
        if(key >= arr[start] && key <= arr[mid]){          //key lies in left half
            return search(arr,start,mid-1,key);
        }
        else{                                               //key lies in right half
            return search(arr,mid+1,end,key);
        }
    }
    //right half is sorted
    else{
        if(key >= arr[mid] && key <= arr[end]){            //key lies in right half
            return search(arr,mid+1,end,key);
        }
        else{                                               //key lies in left half
            return search(arr,start,mid-1,key);
        }
    }
}

int main(){

    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<search(arr,0,n-1,0)<<endl;

    return 0;
}