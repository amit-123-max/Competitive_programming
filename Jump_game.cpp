class Solution {
public:
    int n;
    vector<int> dp;
    bool jg(vector<int>& nums,int curi){
        if(curi==n-1) return true;
        if(dp[curi]!=-1) return dp[curi];

        bool ans = false;
        for(int i = 1;i<=nums[curi];i++){
            if(curi+i<n && jg(nums,curi+i)) return dp[curi] = true;
        }

        return dp[curi] = false;
    }

    bool canJump(vector<int>& nums) {
        n = nums.size();
        dp.assign(n+2,-1);
        return jg(nums,0);
    }
};
