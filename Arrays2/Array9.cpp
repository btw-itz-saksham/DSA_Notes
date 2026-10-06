#include <iostream>
using namespace std;

void transpose(int matrix[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}

//print the transposed matrix
void printMatrix(int matrix[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int matrix[4][4] = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    printMatrix(matrix,4,4);
    transpose(matrix,4,4);
    cout<<"Transposed matrix is:"<<endl;
    printMatrix(matrix,4,4);

    return 0;
}