#include <bits/stdc++.h>
using namespace std;
#define int long long

int ans(int len){
    int count = 0;
    while(len!=0){
        len = len/2;
        count++;
    }
    return count;
}

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    map<char,int> m;
	    int hf = 0;
	    char ch = 'a';
	    for(int i = 0;i<s.size();i++){
	        m[s[i]]++;
	        if(m[s[i]]>hf){
	            hf = m[s[i]];
	            ch = s[i];
	        }
	    }
        int ff = INT_MAX;
        for(char c = 'a';c<='z';c++){
            int len = 0;
            int flen = 0;
	        for(int i = 0;i<s.size();i++){
	            if(s[i]==c) len = 0;
	            else len++;
	            flen = max(len,flen);
	        }
	        ff = min(flen,ff);
        }
        cout<<ans(ff)<<endl;
	}

}
