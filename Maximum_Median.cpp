#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n;
    long long k;
    cin>>n>>k;
    vector<long long> a(n);
    for(int i=0;i<n;++i) cin>>a[i];
    sort(a.begin(), a.end());
    int mid = n/2;
    long long L = a[mid];
    long long R = a[mid] + k + 1;
    while(L < R){
        long long M = L + (R - L + 1) / 2;
        long long need = 0;
        for(int i = mid; i < n; ++i){
            if(a[i] < M){
                need += (M - a[i]);
                if(need > k) break;
            }
        }
        if(need <= k) L = M;
        else R = M - 1;
    }
    cout << L << '\n';
}