#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int
 
int main(){ 
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        bool ans=true;
        for(int i=31; i>=0; i--){
            int ct=0;
            if(((x>>i) & 1)==1) ct++;
            if(((y>>i) & 1)==1) ct++;
            if(((z>>i) & 1)==1) ct++;
            if(ct==2){
                ans=false;
                break;
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}