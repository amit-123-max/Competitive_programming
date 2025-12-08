#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int index = 0;
	    while(s[index]=='1') index++;
	    if(index==s.size()) {cout<<1<<" "<<s.size()<<" "<<1<<" "<<1<<endl;continue;}
	    int si = s.size() - index;
	    int start = 0;
	    int end = si-1;
	    int fsum = 0;
	    int fs,fl;
	    while(end<s.size()){
	        int ans = 0;
	        int a = index;
	        for(int i = start;i<=end;i++){
	            if(s[i]!=s[a]) {ans++;a++;}
	            else break;
	        }
	        if(ans>fsum){
	            fsum = ans;
	            fs = start;
	            fl = end;
	        }
	        start++;end++;
	    }
	    cout<<1<<" "<<s.size()<<" "<<fs+1<<" "<<fl+1<<" "<<endl;
	}

}
