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
        int arr[n];
        int m = INT_MAX;
        for(int i = 0;i<n;i++){
            cin>>arr[i];
            m = min(m,arr[i]);
        }
        if(arr[0]==m){  cout<<"Bob"<<endl; }
        else cout<<"Alice"<<endl;

    }
}