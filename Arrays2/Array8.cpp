#include <iostream>
using namespace std;


//Matrix pointers
//our matrix pointer points to the first row of the matrix 
//we can access the other rows by incrementing the pointer

int main(){
    int matrix[4][4] = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    cout<<matrix<<"="<<&matrix[0][0]<<endl;     // address of first row
    cout<<&matrix[0][1]<<endl; // address of first row second column
    cout<<matrix + 1<<"="<<&matrix[1][0]<<endl;  // address of second row and address of first column of second row
    cout<<matrix + 2<<endl;  // address of third row
    cout<<matrix + 3<<endl;  // address of fourth row

    //for the value of the row we can just dereference it
    cout<<"Dereferencing the row pointer"<<endl;

    cout<<*(matrix + 1)<<"="<<matrix[1]<<endl; // address of second row
    cout<<*(*(matrix + 1) + 2)<<"="<<matrix[1][2]<<endl; // value of second row and third column
}