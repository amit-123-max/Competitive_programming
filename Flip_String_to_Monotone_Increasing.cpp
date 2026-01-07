class Solution {
public:
    int n;
    vector<vector<int>> dp;
    int fs(string& s,int i,int ps){
        if(i>=n) return 0;
        if(dp[i][ps]!=-1) return dp[i][ps];

        if(ps==1){
            if(s[i]=='1') return dp[i][ps] = min(1 + fs(s,i+1,1),fs(s,i+1,0));
            else return dp[i][ps] = fs(s,i+1,ps);
        }
        else{
            if(s[i]=='0') return dp[i][ps] = 1 + fs(s,i+1,0);
            else return dp[i][ps] = fs(s,i+1,0);
        }
        
    }

    int minFlipsMonoIncr(string s) {
        n = s.size();
        dp.assign(n+2,vector<int>(2,-1));
        return fs(s,0,1);
    }
};
