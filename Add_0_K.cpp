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
	    for(int i = 0;i<n;i++) cin>>arr[i];
	    for(int i = 0;i<n;i++){
	        int a = arr[i]%(k+1);
	        cout<<arr[i]+k*a<<" ";
	    }
	    cout<<endl;
	}

}
