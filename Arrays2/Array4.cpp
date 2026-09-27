#include<iostream>
using namespace std;

//Diagonal Sum of 2d array
//O(n)- optimised solution

int Diagnolsum(int matrix[][4],int n){

    int sum =0;

    for(int i=0 ; i<n ;i++){

        sum += matrix[i][i];    // primary diagonal
        if(i != n-i-1){
            sum+= matrix[i][n-i-1];    // secondary diagonal
        }
    }
    cout<<"sum="<<sum;
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

    Diagnolsum(matrix,4);
    // Diagnolsum(matrix2,3,3);
}