#include<iostream>
using namespace std;

//To find largest and smallest element in the array

int main(){

    int arr[]={5,4,3,9,2};

    int max = arr[0];
    int min = arr[0];

    for(int i=0 ; i<sizeof(arr)/sizeof(arr[0]) ;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"The largest elemnt in the array is "<< max<<endl;
    cout<<"The smallest elemnt in the array is "<< min<<endl;
    return 0;
}