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
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> v;
        for(int i = 0;i<n;i++){
            if(s[i]=='0'){
                v.push_back(i+1);
            }
        }
        cout<< v.size()<<endl;
        for(int i = 0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<endl;
    }
}