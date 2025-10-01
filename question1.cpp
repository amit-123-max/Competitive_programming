#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int r;
        if(x%y!=0) {
        r = (((x+y-1)/y))*y;
        if(k<r-x) {cout<<x+k<<endl;continue;}
        else k -= (r-x);
        while(r%y==0){
            r = r/y;
        }
        }
        else {r = x+1; k -= 1;}
        while(k>0 && r!=1){
            if(k>=((r+y-1)/y)*y - r) k -= ((r+y-1)/y)*y - r;
            else {r += k;k=0;break;}
            r += ((r+y-1)/y)*y - r;
            while(r%y==0){
            r /= y;
            }
        }
        if(k==0) cout<<r<<endl;
        else{
            if(k%(y-1)==0) cout<<r<<endl;
            else cout<<r + k%(y-1)<<endl;
        }
    }
}