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
	    int prr[n];
	    int nrr[n];
	    int sum = 0;
	    for(int i = 0;i<n;i++){
	        if(arr[i]>=0) sum += arr[i];
	        prr[i] = sum;
	    }
	    sum = 0;
	    for(int i = n-1;i>=0;i--){
	        if(arr[i]<0) sum += abs(arr[i]);
	        nrr[i] = sum;
	    }
	    int ans = INT_MIN;
	    for(int i = 0;i<n;i++){
	        ans = max(ans,prr[i]+nrr[i]);
	    }
	    cout<<ans<<endl;
	}

}
