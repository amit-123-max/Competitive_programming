#include <bits/stdc++.h>
using namespace std;
#define int long long

void insertMissingPowers(long long n, vector<long long>& v,int& ans) {
    for (int i = 0; i < 63; i++) {          
        if (((n >> i) & 1) == 0) {
            v.push_back(1LL << i);
        }
        else ans++;
    }
}


int32_t main() {
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int> v;
        int ans = 0;
        for(int i = 0;i<n;i++){
            int a;cin>>a;
            insertMissingPowers(a,v,ans);
        }
        sort(v.begin(),v.end());
        for(int i = 0;i<v.size();i++){
            if(k-v[i]>=0) {ans++;k-=v[i];}
        }
        cout<<ans<<endl;
    }

}