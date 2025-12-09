#include <bits/stdc++.h>
using namespace std;
#define int long long

long long nextPowerOf2(long long n) {
    long long p = 1;
    while (p <= n) p <<= 1;
    return p;
}



int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int x,m;
	    cin>>x>>m;
	    int count = 0;
	    for(int i = 1;i<=min(nextPowerOf2(x)-1,m);i++){
	        int y = (x^i);
	        if(y!=0 && (x%y==0 || i%y==0)) count++;
	    }
	    cout<<count<<endl;
	}

}
