class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp = matrix;

        for(int i = n - 2; i >= 0; i--) {
            for(int j = 0; j < n; j++) {
                int best = dp[i + 1][j];
                if(j > 0) best = min(best, dp[i + 1][j - 1]);
                if(j + 1 < n) best = min(best, dp[i + 1][j + 1]);
                dp[i][j] += best;
            }
        }

        int ans = dp[0][0];
        for(int j = 1; j < n; j++) ans = min(ans, dp[0][j]);
        return ans;
    }
};