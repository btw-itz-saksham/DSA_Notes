#include<iostream>
using namespace std;

// Search element in a sorted matrix
//Staircase approach
// Time Complexity = O(n + m)

pair<int,int> search(int matrix[][4], int row, int col, int key) {

    int i=0;
    int j=col-1;
    
    while(i<row && col>=0){
        if(matrix[i][j] == key){
            return {i,j};
        }
        else if(matrix[i][j] > key){
            //left
            j--;
        }
        else{
            //down
            i++;
        }

    }     
    return {-1, -1};
}


int main() {

    int matrix[4][4] = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    pair<int,int> ans = search(matrix, 4, 4, 37);

    cout << ans.first << " " << ans.second;

    return 0;
}