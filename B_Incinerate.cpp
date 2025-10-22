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
        int n,k;
        cin>>n>>k;
        vector<pair<int,int> > v;
        int health[n], power[n];
        for(int i = 0;i<n;i++) cin>>health[i];
        for(int i = 0;i<n;i++){
            cin>>power[i];
            pair<int,int> p = make_pair(power[i],health[i]);
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        sort(health,health+n);
        int maxh = health[n-1];
        bool poss = false;
        int toreduce = 0;
        int index = 0;
        while(k>0 && index<n){
            toreduce += k;
            while(v[index].second-toreduce<=0 && index<n){
                index++;
            }
            if(index<n) k -= v[index].first;
            if(maxh-toreduce<=0){
                poss = true;
                break;
            }
            if(k<=0) break;
        }
        if(poss) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}