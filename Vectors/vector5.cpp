#include<iostream>
#include<vector>
using namespace std;

//2-D Vectors
//This matrix will be a vector of vectors.
//each row will be a vector

int main(){

    vector<vector<int>> vec2D;

    //in 2-d array no of column must be same for each row but in 2-d vector no of column can be different for each row.

    vector<vector<int>> matrix={{1,2,3},
                                {4,5,6},
                                {7,8,9}
                            };

    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}