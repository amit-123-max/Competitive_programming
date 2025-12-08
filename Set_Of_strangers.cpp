#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int arr[n+2][m+2];
	    for(int i = 0;i<n+2;i++){
	        for(int j = 0;j<m+2;j++){
	            arr[i][j] = 0;
	        }
	    }
	    set<int> unique;
	    for(int i = 1;i<n+1;i++){
	        for(int j = 1;j<m+1;j++){
	            cin>>arr[i][j];
	            unique.insert(arr[i][j]);
	        }
	    }
	    set<int> s;
	    for(int i = 1;i<n+1;i++){
	        for(int j = 1;j<m+1;j++){
	            if(arr[i-1][j]==arr[i][j] || arr[i+1][j]==arr[i][j] || arr[i][j-1]==arr[i][j] || arr[i][j+1]==arr[i][j]) s.insert(arr[i][j]);
	        }
	    }
	    int ans = unique.size()*2;
	    for(auto it = unique.begin();it!=unique.end();it++){
	        auto k = s.find(*it);
	        if(k==s.end()) ans--;
	    }
	    if(s.size()>0) ans -= 2;
	    else ans -= 1;
	    cout<<ans<<endl;
	}

}
