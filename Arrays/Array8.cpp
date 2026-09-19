#include<iostream>
using namespace std;

//Subarrays

void subarrays(int *arr,int n){

    for(int start =0 ; start<n ; start++){     //This is starts going from o to n
        //start point
        for(int end=start ; end<=n -1 ; end++){  // this is end  going from start to n-1
            for(int i=start ; i<=end ; i++){      // this is going from start to end
                cout<<arr[i];
            }
            cout<<",";
        }
        cout<<endl;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]); 

    cout<<"Total number of subarrays are"<<endl;
    cout<<(n*(n+1)/2)<<endl;  

    subarrays(arr,n);

    return 0;
}