#include<iostream>
using namespace std;

// Search element in a sorted matrix
// Optimised solution with binary search approach
// Time Complexity = O(n * log(m))

pair<int,int> search(int matrix[][4], int row, int col, int key) {

    for(int i = 0; i < row; i++) {

        int start = 0;
        int end = col - 1;

        while(start <= end) {

            int mid = start + (end - start) / 2;

            if(matrix[i][mid] == key) {
                return {i, mid};
            }

            else if(key > matrix[i][mid]) {
                start = mid + 1;
            }

            else {
                end = mid - 1;
            }
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