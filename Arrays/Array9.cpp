#include <iostream>
#include <climits>
using namespace std;

//Max subarray sum BRUTE FORCE APPROACH , prefix sum approach and kadane's algorithm

void maxsubarraysum1(int *arr,int n){
    int maxsum = INT_MIN;
    for(int start = 0;start<n;start++){
        for(int end = start ; end<=n-1;end++){
            int currentsum = 0;
            for(int i=start ;i<=end ; i++){
                currentsum += arr[i];
            }
            cout<<currentsum<<",";
            maxsum = max(maxsum,currentsum);
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum form bruteforce approach is:"<<maxsum;
}

void maxsubarraysum2(int *arr,int n){
    int maxsum = INT_MIN;

    for(int start = 0;start<n;start++){
        int currentsum = 0;
        for(int end = start ; end<=n-1;end++){
            currentsum = currentsum+arr[end];
            maxsum = max(maxsum,currentsum);
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum from prefixsum approach is:"<<maxsum<<endl;
}

void maxsubarraysum3(int *arr,int n){
    int maxsum = INT_MIN;
    int currentsum = 0;
    for(int start = 0;start<n;start++){
        currentsum+=arr[start];
        maxsum = max(maxsum,currentsum);
        if(currentsum < 0){
            currentsum =0;
        }
        
    }
    cout<<"maximum subarray sum from kadanes algo is:"<<maxsum;
}


int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    maxsubarraysum1(arr,n);
    maxsubarraysum2(arr,n);
    maxsubarraysum3(arr,n);
    

    return 0 ;
}