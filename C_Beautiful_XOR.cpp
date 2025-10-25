#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <climits>
#include <bit>
using namespace std;

#define int long long

int bit_width(long long x) {
    int cnt = 0;
    while (x > 0) {
        cnt++;
        x >>= 1;
    }
    return cnt;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int ans = 0;
        for(int i = 0;i< bit_width(min(a, b));i++){
            if(((a>>i)&1) != ((b>>i)&1)){
                int add = 1;
                for(int j = 0;j<i;j++){
                    add *= 2;
                }
                ans += add;
            }
        }
        if(a<b) cout<<-1<<endl;
        else if(a==b) cout<<0<<endl;
        else{
            cout<<1<<endl;
            cout<<ans<<endl;
        }
    }
}