#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        if(n==0){
            cout<<"YES"<<endl;
            continue;
        }
        vector<int> bits;
        while(n > 0){
            bits.push_back(n & 1);
            n >>= 1;
        }
        int start = 0;
        int end = bits.size()-1;
        while(bits[start]==0) start++;
        bool poss = true;
        while(start<=end){
            if(bits[start]!=bits[end] || (start==end && bits[start]==1)){
                poss = false;
                break;
            }
            start++;end--;
        }
        if(poss) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
}