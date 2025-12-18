#include <bits/stdc++.h>
using namespace std;
#define int long long

int power(int n) {
    int p = 1;
    while (p <= n) p <<= 1;
    return p;
}



int32_t main() {
    int t;cin>>t;
    while(t--){
        int n,l,r,k;
        cin>>n>>l>>r>>k;
        if(n&1) cout<<l<<endl;
        else{
            int m = power(l);
            if(m>r || n==2) {cout<<-1<<endl;continue;}
            else{
                if(k<n-1) cout<<l<<endl;
                else cout<<m<<endl;
            }
        }
    }

}