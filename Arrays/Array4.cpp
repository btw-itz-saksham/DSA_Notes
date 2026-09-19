#include <iostream>
using namespace std;

//Linear search
 
//binary search

int linearsearch(int arr [],int n ,int key){        // O(n)time complicity.
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int Binaryserach(int arr[],int n , int key){      //only used in an sorted array
    int initialidx = 0;
    int finalidx = n - 1;

    while(initialidx <= finalidx){
        int mid=(initialidx + finalidx)/2;
        if(key==arr[mid]){
            return mid;
            
        }
        else if(key >arr[mid]){
            initialidx = mid+1;
        }
        else{
            finalidx = mid -1;
        }
    }
}



int main(){
    int arr[] ={5,8,1,4,9,15};
    int nums[]={17,82,45,69,87,20,23,10};

    int sorted[]={3,5,9,10,15,20};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<linearsearch(arr,n,15)<<endl;
    cout<<linearsearch(nums,n,15)<<endl;

    cout<<Binaryserach(sorted,n,9);

    return 0;
}