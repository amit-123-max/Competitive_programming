#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,q;
	    cin>>n>>m>>q;
	    vector<int> teacher;
	    for(int i = 0;i<m;i++) {int a;cin>>a;teacher.push_back(a);}
	    sort(teacher.begin(),teacher.end());
	    for(int i = 0;i<q;i++){
	        int pos;cin>>pos;
	        auto back = lower_bound(teacher.begin(),teacher.end(),pos);
	        auto front = upper_bound(teacher.begin(),teacher.end(),pos);
	        if(back==teacher.begin()) cout<<*front - 1<<endl;
	        else if(front==teacher.end()){back--;cout<< n-*back <<endl;}
	        else{ 
	            back--;
	            if((*front - *back + 1)%2!=0){
	            cout<<min(pos-*back,*front-pos) + abs(((*front + *back)/2)-pos)<<endl;}
	            else{
	                int midist = min(abs(((*front + *back)/2)-pos),abs(((*front + *back)/2)+1-pos));
	                cout<<min(pos-*back,*front-pos) + midist<<endl;
	            }
	        }
	    }
	}
}