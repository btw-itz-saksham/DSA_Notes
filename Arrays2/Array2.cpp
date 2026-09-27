#include <iostream>
using namespace std;

// Spiral Matrix
// Time Complexity: O(row * col)
// We traverse every element exactly once.

void spiralMatrix(int matrix[4][4], int row, int col)
{
    // These four variables define the current boundary of the matrix.
    int s_row = 0;          // Starting row
    int s_col = 0;          // Starting column
    int e_row = row - 1;    // Ending row
    int e_col = col - 1;    // Ending column

    // Continue until either the row boundary or column boundary crosses.
    // This also handles matrices having an odd number of rows or columns.
    while (s_row <= e_row && s_col <= e_col)
    {
        // ---------------- TOP ----------------
        // Traverse the top row from left to right.
        for (int j = s_col; j <= e_col; j++)
        {
            cout << matrix[s_row][j] << " ";
        }

        // ---------------- RIGHT ----------------
        // Traverse the right column from top to bottom.
        // Start from s_row + 1 because the top-right element
        // has already been printed in the top traversal.
        for (int i = s_row + 1; i <= e_row; i++)
        {
            cout << matrix[i][e_col] << " ";
        }

        // ---------------- BOTTOM ----------------
        // Traverse the bottom row from right to left.
        // Start from e_col - 1 because the bottom-right element
        // has already been printed in the right traversal.
        for (int j = e_col - 1; j >= s_col; j--)
        {
            // If starting row == ending row, there is only one row left.
            // That row was already printed in the TOP traversal,
            // so we must not print it again.
            if (s_row == e_row)
            {
                break;
            }

            cout << matrix[e_row][j] << " ";
        }

        // ---------------- LEFT ----------------
        // Traverse the left column from bottom to top.
        // Start from e_row - 1 because the bottom-left element
        // has already been printed in the bottom traversal.
        for (int i = e_row - 1; i >= s_row + 1; i--)
        {
            // If starting column == ending column, there is only one
            // column left. That column was already printed in the
            // RIGHT traversal, so we must not print it again.
            if (s_col == e_col)
            {
                break;
            }

            cout << matrix[i][s_col] << " ";
        }

        // Move the boundaries inward for the next inner layer.
        s_row++;
        s_col++;
        e_row--;
        e_col--;
    }
}

int main()
{
    // 4 x 4 matrix
    int matrix[4][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    // 3 x 4 matrix
    int matrix2[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Spiral traversal of 4 x 4 matrix
    spiralMatrix(matrix, 4, 4);

    cout << endl;

    // Spiral traversal of 3 x 4 matrix
    spiralMatrix(matrix2, 3, 4);

    return 0;
}