#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    map<int,int> m;
	    for(int i = 0;i<n;i++){
	        int a;cin>>a;
	        m[a]++;
	    }
	    int l = m.rbegin()->first;
	    int ma = m.begin()->first;
	    bool flag = true;
	    for(int i = l;i>=ma;){
	        if(m[i]%2!=0){
	            int req = 1;
	            while(--i && req>0 && i>=ma){
	                if(m[i]==0) req += 2;
	                else if(m[i]>2){
	                    if(req-(m[i]-2)<=0) {m[i] -= req;req=0;break;}
	                    else req -= (m[i]-2);
	                }
	                else if(m[i]==1) req +=1;
	            }
	            if(req>0) {flag=false;break;}
	        }
	        else i--;
	    }
	    if(flag) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
}
