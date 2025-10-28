#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,q;
	    cin>>n>>q;
	    string s;
	    cin>>s;
	    int ca = 0;
	    for(int i = 0;i<n;i++){
	        if(s[i]=='A') ca++;
	    }
	    if(ca==n){
	        for(int i = 0;i<q;i++){
	            int a;cin>>a;
	            cout<<a<<endl;
	        }
	    }
	    else{
	    for(int i = 0;i<q;i++){
	        int a;
	        cin>>a;
	        int index = 0;
	        int count = 0;
	        while(a!=0){
	            if(s[index]=='A') a -= 1;
	            else a /= 2;
	            index++;
	            count++;
	            if(index==n) index = 0;
	        }
	        cout<<count<<endl;
	    }
	    }
	}

}
