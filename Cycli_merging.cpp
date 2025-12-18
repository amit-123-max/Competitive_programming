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
        int start = 0;int end = n-1;
        int ans = 0;
        while(start<end){
            if(arr[start]>arr[end]){
                if(max(arr[end],arr[end-1])>max(arr[start],arr[end])){
                    arr[start] = max(arr[start],arr[end]);
                    ans += arr[start];
                }
                else{
                    arr[end] = max(arr[end],arr[end-1]);
                    ans += arr[end];
                }
                end--;
            }
            else{
                if(max(arr[end],arr[start])>max(arr[start],arr[start+1])){
                    arr[start] = max(arr[start],arr[start+1]);
                    ans += arr[start];
                }
                else{
                    arr[end] = max(arr[end],arr[start]);
                    ans += arr[end];
                }
                start++;
            }
        }
        cout<<ans<<endl;
    }
}