class Solution {
public:
    vector<int> dp;
    int mod = 1e9 + 7;
    int cw(int low, int high, int zero, int one,int i){
        if(i>high) return 0;
        if(dp[i]!=-1) return dp[i];

        if(i>=low && i<=high){
            return dp[i] = (1 + cw(low,high,zero,one,i+one) + cw(low,high,zero,one,i+zero))%mod;
        }
        else return dp[i] = (cw(low,high,zero,one,i+one) + cw(low,high,zero,one,i+zero))%mod;
    }

    int countGoodStrings(int low, int high, int zero, int one) {
        dp.assign(high+1,-1);
        return cw(low,high,zero,one,0);
    }
};