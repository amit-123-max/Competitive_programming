#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n,q;
	    cin>>n>>q;
	    int arr[n];
	    int queries[q];
	    map<int,int> m;
	    for(int i = 0;i<n;i++) cin>>arr[i];
	    for(int i = 0;i<q;i++) cin>>queries[i];
	    int prevb = 0;
	    for(int i = 0;i<n;i++){
	        int boundary = (n - i-1) + (prevb - max(0ll,(i-1)));
	        m[boundary]++;
	        if(i<n-1){
	           int num = arr[i+1] - arr[i] - 1;
	           int val = boundary - i;
	            m[val] += num;
	        }
	        prevb = boundary;
	    }
	    for(int i = 0;i<q;i++) cout<<m[queries[i]]<<" ";
	    cout<<endl;
	}
}
