#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    map<char,int> m;
	    for(int i = 0;i<n;i++) m[s[i]]++;
	    auto it = m.begin();
	    while(!m.empty()){
	        for(auto it = m.begin();it!=m.end();){
	        cout<<it->first;
	        (it->second)--;
	        if(it->second==0) it = m.erase(it);
	        else it++;}
	    }
	    cout<<endl;
	}

}