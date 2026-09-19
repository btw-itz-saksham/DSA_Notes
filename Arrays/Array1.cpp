#include <iostream>
using namespace std;


int main(){
    int arr[10]={7,8,4,2,10,93,4}; // an array of size 10  // rest 3 are garbage values

    //traversing through an array
    for(int i=0; i < sizeof(arr)/sizeof(arr[0]) ;i++){          //size of array = length -1;
        cout<<arr[i]<<" ";
    }

    cout<<endl;


    //taking input in an array from user
    int arr1 [5];  

    for(int i=0;i < sizeof(arr1)/sizeof(arr1[0]) ;i++){
        cout<<"Enter the "<<i<<"th index value" <<endl;
        cin>>arr1[i];
    }
    //printing that array values.
    cout<<"The array values are : "<<endl;
    for(int i=0;i <sizeof(arr1)/sizeof(arr1[0]) ;i++){
        cout<<arr1[i]<<" ";
    }

    return 0;
}

