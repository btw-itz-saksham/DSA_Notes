#include<iostream>
#include<vector>
using namespace std;

//2-D dynamic arrays
//It is not possible to create a dynamic 2-d array directly
// therefore we create multiple 1-d dynamic arrays 
//we also assign the n-pointer to the first element of the 1-d array for n-rows
//then we create a array of pointers 
//where elements of array will be the pointers to the 1-d arrays
//that array will have the elements / pointers equal to the number of rows in our 2-d array


int main(){

    int rows, cols;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;


    //creating a 2-d dynamic array
    int*  *matrix = new int *[rows];    //array of pointers

    for(int i=0;i<rows;i++){
        matrix[i] = new int [cols];   //1-d dynamic array
    }


    //data storing
    int x=1;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            matrix[i][j] = x;
            x++;
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<matrix[2][2]<<endl;  //accessing the element at 3rd row and 3rd column
    cout<<*(*(matrix+2)+2)<<endl;  //accessing the element at 3rd row and 3rd column using pointer arithmetic
    return 0;
}