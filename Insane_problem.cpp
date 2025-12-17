#include <bits/stdc++.h>
using namespace std;
#define int long long

void power(vector<int>& v,int k,int r2){
    int p = 1;
    while(p<=r2){
        v.push_back(p);p*=k;
    }
}

void count(){
    vector<int> p;
	int k,l1,r1,l2,r2;
	cin>>k>>l1>>r1>>l2>>r2;
	power(p,k,r2);
	int ans = 0;
    for(int i = 0;i<p.size();i++){
        int low = (l2+p[i]-1)/p[i];
        int high = r2/p[i];
        
        int fl = max(l1,low);
        int fh = min(r1,high);
        ans  += max(0ll,fh-fl+1);
    }
    cout<<ans<<endl;
}

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    count();
	}
}
