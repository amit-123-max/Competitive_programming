#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = 1e9 + 7;

int count(int n,int k,int j,int size,vector<vector<int>>& dp){
    if(size==k) return 1;
    if(dp[j][size]!=-1) return dp[j][size]; 
    
    int c = 0;
    for(int i = 1;i*j<=n;i++){
        c = (c + count(n,k,i*j,size+1,dp))%mod;
    }
    return dp[j][size] = c%mod;
}


int32_t main() {
        int n,k;
        cin>>n>>k;
        int ans = 0;
        vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
        for(int i = 1;i<=n;i++) ans = (ans + count(n,k,i,1,dp))%mod;
        cout<<ans<<endl;
}
