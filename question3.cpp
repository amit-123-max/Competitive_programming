#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        string x,y;
        cin>>x>>y;
        vector<int> v1;
        vector<int> v2;
        int i = 0;
        while(i<x.size()){
            v1.push_back(x[i]-'0');
            v2.push_back(y[i]-'0');
            i++;
        }
        for(int i = 0;i<v1.size();i++){
            if(v1[i]>v2[i]){
                for(int j = i+1;j<v1.size();j++){
                    if(v1[j]>v2[j]){
                        swap(v1[j],v2[j]);
                    }
                }
                break;
            }
            else if(v1[i]<v2[i]){
                for(int j = i+1;j<v1.size();j++){
                    if(v2[j]>v1[j]){
                        swap(v1[j],v2[j]);
                    }
                }
                break;
            }
        }
        for(int i = 0;i<v1.size();i++){
            cout<<v1[i];
        }
        cout<<endl;
        for(int i = 0;i<v2.size();i++){
            cout<<v2[i];
        }
        cout<<endl;
    }
}