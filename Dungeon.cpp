class Solution {
public:
    int n;
    int m;
    vector<vector<int>> dp;

    int game(int i,int j,vector<vector<int>>& dungeon){
        if(i>=n || j>=m) return 1e9;

        if(dp[i][j]!=-1) return dp[i][j];

        if(i==n-1 && j==m-1){
            if(dungeon[i][j]>0) return 1;
            return abs(dungeon[i][j]) + 1;
        }
        
        int right = game(i,j+1,dungeon);
        int down = game(i+1,j,dungeon);

        int result = min(right,down) - dungeon[i][j];

        return dp[i][j] = (result <= 0) ? 1 : result; 
    }

    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        n = dungeon.size();
        m = dungeon[0].size();
        dp.assign(201, vector<int>(201, -1));
        return game(0,0,dungeon);
    }
};