#include <bits/stdc++.h>
using namespace std;

int count(int x,vector<int>& v){
    bool poss = false;
    int lo = 0;
    int safe = 0;
    while(x){
        if(x%10!=0) poss=true;
        if(poss) safe++;
        else lo++;
        x /= 10;
    }
    if(lo!=0) v.push_back(lo);
    return safe;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    vector<int> v;
	    int safe = 0;
	    for(int i = 0;i<n;i++){
	        int a;cin>>a;
	        safe += count(a,v);
	    }
	    sort(v.begin(),v.end(),greater<int>());
	    for(int i = 1;i<v.size();i += 2) safe += v[i];
	    if(safe>=m+1) cout<<"Sasha"<<endl;
	    else cout<<"Anna"<<endl;
	}

}