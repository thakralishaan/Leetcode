class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int n=matrix.size();
    int m= matrix[0].size();
    vector<int> row(n, 0); // row vector
    vector<int> col(m, 0); // col vector

    // Traverse the matrix:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                // mark ith index of row with 1:
                row[i] = 1;

                // mark jth index of col with 1:
                col[j] = 1;
            }
        }
    }

    // Finally, mark all (i, j) as 0
    // if row[i] or col[j] is marked with 1.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (row[i] || col[j]) {
                matrix[i][j] = 0;
            }
        }
    }
    }
};

// Brute Force
// here we replace all elements with -1 which are neighbours to 0 element in row and column such tha again run a for loop to replace -1 with 0 .... helps not remove 1 which are not in same row and col
    
// Better Approach
// create two new arrays for col and row of n and m size , which will store the 0 if present in that row or col...indicating if one 0 is present then the whole col or row has to be changed to 0 
// make sure only positive numbers are present in matrix"