#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int r = 0;
	    vector<int> v;
	    bool flag = true;
	    for(int i = 0;i<n;i++){
	        if((i|x) == x && flag){
	            v.push_back(i);
	            r |= i;
	        }
	        else{
	            r |= x;
	            v.push_back(x);
	            flag = false;
	        }
	    }
	    if(r!=x){
	        for(int i = 0;i<n-1;i++) cout<<v[i]<<" ";
	        cout<<x<<endl;
	    }
	    else{
	        for(int i : v) cout<<i<<" ";
	        cout<<endl;
	    }
	    }
	}
