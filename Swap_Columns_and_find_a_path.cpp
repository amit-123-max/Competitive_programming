#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[2][n];
	    for(int i = 0;i<2;i++){
	        for(int j = 0;j<n;j++){
	            cin>>arr[i][j];
	        }
	    }
	    vector<int> v;
	    int sum = 0;
	    for(int i = 0;i<n;i++){
	        sum += max(arr[0][i],arr[1][i]);
	        v.push_back(min(arr[0][i],arr[1][i]));
	    }
	    sort(v.begin(),v.end());
	    sum += v[n-1];
	    cout<<sum<<endl;
	}

}
