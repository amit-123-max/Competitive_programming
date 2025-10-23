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
        int m = INT_MIN;
        for(int i = 0;i<n;i++){
            int a;cin>>a;
            m = max(m,a);
        }
        cout<<m<<endl;
    }
}