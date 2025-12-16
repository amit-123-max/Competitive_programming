#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n],brr[n];
	    for(int i = 0;i<n;i++) cin>>arr[i];
	    map<int,int> req;
	    for(int i = 0;i<n;i++) {
	        cin>>brr[i];
	        req[brr[i]]++;
	    }
	    int m;cin>>m;
	    map<int,int> ma;
	    int last;
	    for(int i = 0;i<m;i++) {int a;cin>>a;ma[a]++;if(i==m-1) last = a;}
	    bool seq = true;
	    if(req[last]==0) seq = false;
	    bool poss = true;
	    for(int i = 0;i<n;i++) {
	        if(arr[i]!=brr[i]) ma[brr[i]]--;
	        if(ma[brr[i]]<0) {poss=false;break;}
        }
	    if(poss && seq) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
	}

