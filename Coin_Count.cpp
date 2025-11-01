class Solution {
  public:
    int minCoins(vector<int> &coins, int sum) {
        vector<vector<int>> dp(coins.size()+1,vector<int>(sum+1,-1));
        sort(coins.begin(),coins.end());
        for(int i = 0;i<coins.size()+1;i++){
            dp[i][0] = 0;
        }
        for(int i = 1;i<coins.size()+1;i++){
            for(int j = 1;j<sum+1;j++){
                if(coins[i-1]<=j){
                    if(dp[i][j-coins[i-1]]==-1 && dp[i-1][j]!=-1) dp[i][j] = dp[i-1][j];
                    else if(dp[i][j-coins[i-1]]!=-1 && dp[i-1][j]==-1) dp[i][j] = 1+dp[i][j-coins[i-1]];
                    else dp[i][j] = min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                }
                else dp[i][j] = dp[i-1][j];               
            }
        }
        // return (dp[coins.size()][sum] == -1) ? -1 : dp[coins.size()][sum];
        return dp[coins.size()][sum];

    }
};