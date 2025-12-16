#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MAXN = 10000000;
bitset<MAXN + 1> isPrime;
vector<int> primes;

void sieve() {
    isPrime.set();
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i * i <= MAXN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAXN; j += i)
                isPrime[j] = 0;
        }
    }
    for (int i = 2; i <= MAXN; i++)
        if (isPrime[i]) primes.push_back(i);
}

int32_t main() {
    sieve(); 

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        for(int p : primes){
            if(p > n) break;
            ans += n/p;
        }
        cout<<ans<<endl;
    }
}
