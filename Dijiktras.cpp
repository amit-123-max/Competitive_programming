#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n,m;
    cin>>n>>m;
    vector<vector<pair<int,int>>> adj(n+1);
    
    for(int i = 0;i<m;i++){
        int a,b,c;cin>>a>>b>>c;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }
    
    vector<int> parent(n+1,-1);
    parent[1] = 1;
    vector<int> dist(n+1,LLONG_MAX);
    using p = pair<int,int>;
    priority_queue<p,vector<p>,greater<p>> q;
    q.push({0,1});
    dist[1] = 0;
    
    while(!q.empty()){
        auto [cost,node] = q.top();
        q.pop();
        if(cost>dist[node]) continue;
        
        for(auto [a,b] : adj[node]){
            if(cost+b<dist[a]){
                dist[a] = cost + b;
                parent[a] = node;
                q.push({cost+b,a});
            }
        }
    }
    if(parent[n]==-1) cout<<-1<<endl;
    else{
        vector<int> result;
        int node = n;
        while(parent[node]!=node){
            result.push_back(node);
            node = parent[node];
        }
        result.push_back(1);
        for(int i = result.size()-1;i>=0;i--) cout<<result[i]<<" ";
        cout<<endl;
    }
    
}