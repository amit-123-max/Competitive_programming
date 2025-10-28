#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        vector<int> ans;
        int arr[n];
        int mx = 1;
        for(int i = 0;i<n;i++){
            cin>>arr[i];
            if(i==0) ans.push_back(1);
            else{
                if(arr[i]-arr[i-1]>i){
                    mx = max(mx,ans[i-1]);
                    mx=mx+1;
                    ans.push_back(mx);
                }
                else ans.push_back(ans[i-(arr[i]-arr[i-1])]);
            }
        }
        for(int i : ans) cout<<i<<" ";
        cout<<endl;
	}
}