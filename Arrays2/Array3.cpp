#include<iostream>
using namespace std;

//Diagonal Sum of 2d array
//O(n2)

int Diagnolsum(int matrix[][4],int row , int col){

    int sum =0;

    for (int  i = 0; i < row; i++){
        for(int j = 0; j< col ; j++){
            if(i == j){
                sum +=matrix[i][j];
            }
            else if (j == col-i-1){
                sum+=matrix[i][j];
            }
        }
    }

    cout<<"my sum="<<sum;
    return sum;
}


int main(){
    int matrix [4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int matrix2 [3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    Diagnolsum(matrix,4,4);
    // Diagnolsum(matrix2,3,3);
}