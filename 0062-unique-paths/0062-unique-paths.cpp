class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(n, vector<int>(m, -1)); // Initialize dp table with -1.

        return uniquePathsHelper(0, 0, m, n, dp);
    }

private:
    int uniquePathsHelper(int i, int j, int m, int n, vector<vector<int>>& dp) {
        if (i >= n || j >= m)
            return 0;

        if (i == n - 1 && j == m - 1)
            return 1;

        if (dp[i][j] != -1) {
            return dp[i][j];
        } else {
            dp[i][j] = uniquePathsHelper(i + 1, j, m, n, dp) + uniquePathsHelper(i, j + 1, m, n, dp);
            return dp[i][j];
        }
    }
};
