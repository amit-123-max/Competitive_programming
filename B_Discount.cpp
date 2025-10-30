#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    int sum = 0;
	    for(int i = 0;i<n;i++) {cin>>arr[i];sum += arr[i];}
	    int b[k];
	    for(int i = 0;i<k;i++) cin>>b[i];
	    sort(b,b+k);
	    sort(arr,arr+n);
	    int end = n;
	    for(int i = 0;i<k;i++){
	        sum -= arr[end-b[i]];
	        end -= b[i];
	        if(end<=0) break;
	        if(i<k && end-b[i+1]<0) break;
	    }
	    cout<<sum<<endl;
	}
}