#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> pre(vector<int>& v){
    sort(v.begin(),v.end(),greater<int>());
    
    vector<int> prev(v.size());
    prev[0] = v[0];
    for(int i = 1;i<v.size();i++){
        prev[i] = v[i] + prev[i-1];
    }
    return prev;
}

int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,vector<int>> m;
        vector<int> uni(n);
        for(int i = 0;i<n;i++) cin>>uni[i];
        for(int i = 0;i<n;i++){
            int a;cin>>a;
            m[uni[i]].push_back(a);
        }
        map<int,vector<int>> maa;
        for(auto it : m) maa[it.first] = pre(it.second);
        vector<int> v(n,0);
        for(auto it : maa){
            auto v1 = it.second;
            for(int i = 1;i<=n;i++){
                if(v1.size()<i) break;
                v[i-1] += v1[v1.size()-1 - (v1.size()%i)];
            }
        }
        for(int i : v) cout<<i<<" ";
        cout<<endl;
    }

}