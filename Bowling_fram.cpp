#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	    int t;
	    cin>>t;
	    while(t--){
	        int w,b;
	        cin>>w>>b;
	        int a = w+b;
	        int n = 0;
	        int k = 1;
	        while(a-k>=0){
	            a -= k;
	            k++;
	            n++;
	        }
	        cout<<n<<endl;
	    }
}
