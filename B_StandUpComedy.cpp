#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <climits>
using namespace std;

#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int bl,al,b,bh;
        cin>>bl>>al>>b>>bh;
        if(bl==0){
            cout<<1<<endl;
        }
        else{
            int ans = 0;
            if(bl>bh){
                ans += bl + bh;
                ans += min(al,b)*2;
                if(al==0 && b==0) ans += 0;
                else if(al==0 || b==0){
                    if(bl-bh>=al+b) ans += al+b;
                    else ans += (bl-bh)+1;
                }
                else{
                    ans += min(bl-bh+1,abs(al-b));
                }
            }
            else {
                ans += 2*bl;
                if(al+b==0){
                    if(bl==bh) ans += 0;
                    else ans += 1;
                }
                else if(al!=b) ans += min(al,b)*2+1;
                else ans += min(al,b)*2;
            }
            cout<<ans<<endl;
        }
    }
}