#include <iostream>
#include <climits>
using namespace std;

//trapping rainwater problem

int Totalwater(int *arr,int n){

    //Leftmaxarray
    int leftmax[n];
    leftmax[0]=arr[0];
    for(int i=1; i<n ;i++){
        leftmax[i]=max(leftmax[i-1],arr[i-1]);
    }

    
    int rightmax[n];
    rightmax[n-1]=arr[n-1];
    for(int i=n-2; i>=0 ;i--){
        rightmax[i]=max(rightmax[i+1],arr[i+1]);
    }

    int trappedwater=0 ;

    

    for(int i=0;i<n;i++){
        int currentwater = min(leftmax[i],rightmax[i]) - arr[i] ;
        if(currentwater>=0){
            trappedwater+=currentwater;
        }
    }
   cout<<trappedwater;
   return trappedwater;
}


int main(){

    int arr[]={4,2,0,6,3,2 ,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    Totalwater(arr,n);

    return 0;
}