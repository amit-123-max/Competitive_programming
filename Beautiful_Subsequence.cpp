#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
const int MOD = 998244353;
int addmod(int a,int b){ a+=b; if(a>=MOD) a-=MOD; return a; }
int submod(int a,int b){ a-=b; if(a<0) a+=MOD; return a; }
int mulmod(int64 a,int64 b){ return int((a*b)%MOD); }
int modpow(int64 a,int64 e){
    int64 r=1;
    while(e){
        if(e&1) r=(r*a)%MOD;
        a=(a*a)%MOD;
        e>>=1;
    }
    return int(r);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if(!(cin>>T)) return 0;
    const int MAXN = 200000 + 5;
    vector<int> pow2(MAXN), invpow2(MAXN);
    pow2[0]=1;
    for(int i=1;i<MAXN;i++) pow2[i]=addmod(pow2[i-1], pow2[i-1]);
    int inv2 = (MOD+1)/2;
    invpow2[0]=1;
    for(int i=1;i<MAXN;i++) invpow2[i]=mulmod(invpow2[i-1], inv2);
    while(T--){
        int n; cin>>n;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        vector<int> pref2(n+1,0);
        for(int i=1;i<=n;i++) pref2[i]=pref2[i-1] + (a[i]==2);
        vector<int> sufSum(n+1,0), sufCnt(n+1,0);
        for(int i=n;i>=1;i--){
            sufSum[i-1]=sufSum[i];
            sufCnt[i-1]=sufCnt[i];
            if(a[i]==3){
                int val = pow2[pref2[i-1]];
                sufSum[i-1]=addmod(sufSum[i-1], val);
                sufCnt[i-1]=sufCnt[i-1]+1;
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(a[i]==1){
                int leftInv = invpow2[pref2[i]];
                int term = mulmod(leftInv, sufSum[i]);
                term = submod(term, sufCnt[i]%MOD);
                ans = addmod(ans, term);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
