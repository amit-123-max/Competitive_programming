#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n,m;
    cin>>n>>m;
    vector<vector<pair<int,int>>> adj(n);
    for(int i = 0;i<m;i++){
        int x,y,c;
        cin>>x>>y>>c;
        adj[x-1].push_back({y-1,c});
    }
    vector<int> dist(n,LLONG_MAX);
    dist[0] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
    p.push({0,0});

    while(!p.empty()){
        auto [dis,node] = p.top();
        p.pop();
        if(dis > dist[node]) continue;

        for(auto [a,b] : adj[node]){
            if(dist[a]>dis+b) {dist[a] = dis+b;p.push({dis+b,a});}
        }
    }
    for(int i : dist) cout<<i<<" ";
    cout<<endl;
}
