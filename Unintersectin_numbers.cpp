#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define int long long

// bool poss(vector<int>& v,int i,int n,int &req){
    
//     if(i>=v.size()) return false;
    
//     if((n + v[i])%9==req) return true;
//     else{
//         bool leke = poss(v,i+1,n+v[i],req);
//         bool binaliye = poss(v,i+1,n,req);
//         if(leke || binaliye) return true;
//     }
    
//     return false;
// }

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    vector<int> v;
	    int three = 0;
	    int two = 0;
	    int sum = 0;
	    for(int i = 0;i<n;i++){
	        if(s[i]=='3') {three++;v.push_back(6);}
	        if(s[i]=='2') {two++;v.push_back(2);}
	        sum += (s[i] - '0');
	    }
	    cout<<sum<<endl;
	    // if(sum%9==0) {cout<<"YES"<<endl;continue;}
	    // else{
	    //     int r = 9 - sum%9;
	    //     sort(v.begin(),v.end());
	    //     if(poss(v,0,0,r)) cout<<"YES"<<endl;
	    //     else cout<<"NO"<<endl;
	    // }
	}
}
