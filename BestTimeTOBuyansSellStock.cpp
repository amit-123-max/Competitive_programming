class Solution {
public:
    int n;
    vector<vector<int>> dp;
    int btbs(vector<int>& prices,int i,int ps){
        if(i>=n) return 0;
        if(dp[i][ps+1]!=-1) return dp[i][ps+1];

        int nothing = btbs(prices,i+1,ps);
        int smthng = INT_MIN;
        if(ps==1){
            smthng = -prices[i] + btbs(prices,i+1,-1);
        }
        else if(ps==-1){
            smthng = prices[i] + btbs(prices,i+1,0);
        }
        else if(ps==0){
            smthng = btbs(prices,i+1,1);
        }

        return dp[i][ps+1] = max(nothing,smthng);
    }

    int maxProfit(vector<int>& prices) {
        n = prices.size();
        dp.assign(n+1,vector<int>(5,-1));
        return btbs(prices,0,1);
    }
};