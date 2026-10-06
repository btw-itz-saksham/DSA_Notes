#include<iostream>
using namespace std;

//Search element in a sorted matrix
//brute force with time complixicity of  O(row*col)

pair<int,int> Search(int arr[][4],int row ,int col,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] == key){
                return {i,j};
            }
        }
    }
    return{-1,-1};
}

int main(){

    int matrix[4][4]={
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    pair<int,int> ans = Search(matrix, 4, 4, 29);

    cout << ans.first << " " << ans.second;

    return 0;
}