#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<char> v(n,'+');
        int c1 = 0;
        int c2 = 0;
        int c0 = 0;
        for(int i = 0;i<k;i++){
            if(s[i]=='0') c0++;
            else if(s[i]=='1') c1++;
            else if(s[i]=='2') c2++;
        }
        int start = 0;
        while(start<c0){
            v[start] = '-';
            start++;
        }
        int end = n-1;
        while(end>n-1-c1){
            v[end] = '-';
            end--;
        }
        int a = c2;
        while(a-- && start<=end){
            v[start] = '?';
            v[end] = '?';
            start++;
            end--;
        }
        if(n==k){
            for(int i = 0;i<n;i++){
            cout<<'-';
            }
            cout<<endl;
        }
        else{
        for(int i = 0;i<n;i++){
            cout<<v[i];
        }
        cout<<endl;
        }
    }
}