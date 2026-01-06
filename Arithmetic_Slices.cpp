class Solution {
public:

    int n;
    int as(vector<int>& nums,int prev,int i,long long diff){
        if(i>=n) return 1;

        int take = 0;
        if((long long)nums[i]-nums[prev]==diff) take = as(nums,i,i+1,diff);
        int nottake = as(nums,prev,i+1,diff);

        return take + nottake;
    }

    int numberOfArithmeticSlices(vector<int>& nums) {
        n = nums.size();
        int ans = 0;
        for(int i = 0;i<n-1;i++){
            for(int j = i+1;j<n;j++){
                ans += as(nums,j,j+1,(long long)nums[j]-nums[i])-1;
            }
        }
        return ans;
    }
};