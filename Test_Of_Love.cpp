#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	   int n,m,k;
	   cin>>n>>m>>k;
	   string a;cin>>a;
	   vector<int> l,w,c;
	   for(itn i = 0;i<n;i++){
	       if(a[i]=='L') l.insert(i);
	       else if(a[i]=='W') w.insert(i);
	       else if(a[i]=='C') c.insert(i);
	   }
	   int pos = -1;
	   bool poss = true;
	   while(pos<=n){
	       auto it = lower_bound(l.begin(),l.end(),pos);
	       if(it!=l.end() && *it != pos && pos+m>=*it) {pos = *it;continue;}
	       else{
	           auto wt = lower_bound(w.begin(),w.end(),pos);
	           if(wt==w.end() || *wt - pos>k) {poss=false;break;}
	           bool safe = false;
	           while(!safe && wt!=w.end()){
	           auto agla = lower_bound(l.begin(),l.end(),*wt);
	           auto cagala = lower_bound(c.begin(),c.end(),*wt);
	           if(cagla!=c.end() && agla!=l.end() && *cagala<*agla) {
	               wt = upper_bound(w.begin(),w.end(),*wt);
	           }
	           else if(agla==l.end() && cagla!=c.end()){
	               poss = false;break;
	               //safe = true;k -= *agla - *wt;pos=*agla;
	           }
	           else if(agla!=l.end() && cagala!=c.end()){
	               
	           }
	           else{
	               
	           }
	           }
	           }
	   }
	   if(poss) cout<<"YES"<<endl;
	   else cout<<"NO"<<endl;
	}

}
