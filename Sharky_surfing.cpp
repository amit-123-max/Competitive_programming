#include <bits/stdc++.h>
using namespace std;
#define int long long

void add(vector<pair<int,int>>& h,vector<pair<int,int>>& b){
    priority_queue<pair<int,int>> p;
    int power = 1;
    int ct = 0;
    int i = 0;
    bool poss = true;
    int j = 0;
    while(i<h.size()){
        while(h[i].first>b[j].first && j<b.size()){
            p.push({b[j].second,b[j].first});j++;
        }
        int pr = h[i].second - h[i].first+2;
        while(!p.empty() && power<pr){
            auto it = p.top();
            power += it.first;
            p.pop();
            ct++;
        }
        if(power<pr) {poss=false;break;}
        i++;
    }
    if(!poss) cout<<-1<<endl;
    else cout<<ct<<endl;
}


int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,L;
	    cin>>n>>m>>L;
	    vector<pair<int,int>> h;
	    for(int i = 0;i<n;i++){
	        int a,b;cin>>a>>b;
	        h.push_back({a,b});
	    }
	    vector<pair<int,int>> b;
	    for(int i = 0;i<m;i++){
	        int a,d;cin>>a>>d;
	        b.push_back({a,d});
	    }
	    add(h,b);
	}
}
