#include <bits/stdc++.h>
using namespace std;
#define long long int;

int32_t main() {
	    string s;
	    cin>>s;
	    for(int i = 1;i<s.size();i++){
	        if(s[i]==s[i-1]){
	            for(char j = 'a';j<='z';j++){
	                if(j!=s[i-1] && j!=s[i+1]){
	                    s[i] = j;
	                    break;
	                }
	            }
	        }
	    }
	    cout<<s<<endl;

}