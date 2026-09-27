#include<iostream>
using namespace std;

// input and output 2d array

int main(){
    int arr[3][4];
    int row =3;
    int col =4;

    for(int i=0;i<row;i++){ 
        for(int j=0;j<col;j++){
            cin>>arr[i][j];      // (0,0) (0,1) (0,2) (0,3) (1,0) .....
        }
    }

    for(int i=0;i<row;i++){ 
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";      // (0,0) (0,1) (0,2) (0,3) (1,0) .....
        }
        cout<<endl;
    }
    return 0;
}