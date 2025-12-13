#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int start = 1;int end = n;
	    int arr[n];
	    for(int i = 0;i<n;i++) arr[i] = i+1;
	    while(start<end && k>0){
	        if(2*abs(end-start)<=k) {
	            k -= 2*abs(start-end);
	            swap(arr[start-1],
	            arr[end-1]);
	            end--;start++;
	        }
	        else end--;
	    }
	    if(k==0){
	        cout<<"Yes"<<endl;
	        for(int i = 0;i<n;i++) cout<<arr[i]<<" ";
	        cout<<endl;
	    }
	    else cout<<"No"<<endl;
	    }
	}

