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
	    sort(arr,arr+n);
	    int ans = 0;
	    int mx = arr[n-1];
	    for(int i = n-1;i>=0;i--){
	        for(int j = i-1;j>=0;j--){
	            auto it = upper_bound(arr,arr+n,max(arr[i]-arr[j],mx-(arr[i]+arr[j])));
	            int ind = it - arr;
	            if(ind<j) ans += j - ind; 
	        } 
	    }
	    cout<<ans<<endl;
	}
}
