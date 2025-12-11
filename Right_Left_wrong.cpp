#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0;i<n;i++) cin>>arr[i];
	    int pre[n];pre[0] = arr[0];
	    for(int i = 1;i<n;i++) pre[i] = arr[i] + pre[i-1]; 
	    string s;
	    cin>>s;
	    int start = 0;
	    int end = n-1;
	    int ans = 0;
	    while(start<end){
	        if(s[start]!='L'){
	            while(s[start]!='L' && start<n) start++;
	        }
	        if(s[end]!='R'){
	            while(s[end]!='R' && end>=0) end--;
	        }
	        if(start>=end) break;
	        if(start!=0) ans += pre[end] - pre[start-1];
	        else ans += pre[end];
	        start++;end--;
	    }
	    cout<<ans<<endl;
	}

}