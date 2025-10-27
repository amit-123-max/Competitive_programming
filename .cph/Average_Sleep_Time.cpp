#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i = 0;i<n;i++) cin>>arr[i];
	    int sum = 0;
	    int a = 0;
	    for(int i = 0;i<n;i++){
	        if(a<k && n-i>=k){
	            a++;
	        }
	        else if(n-i<k){
	            a = min(a,n-i);
	        }
	        sum = sum + arr[i]*a;
	    }
	    double ans = (double)sum / (n - k + 1); 
        cout << fixed << setprecision(10) << ans << endl;
}
