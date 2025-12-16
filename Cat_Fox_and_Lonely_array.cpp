#include <bits/stdc++.h>
using namespace std;

void incIndexForSetBits(int x, vector<int>& v) {
    int bit = 0;
    while (x > 0 && bit < (int)v.size()) {
        if (x & 1) {
            v[bit]++;
        }
        x >>= 1;
        bit++;
    }
}

void decIndexForSetBits(int x, vector<int>& v) {
    int bit = 0;
    while (x > 0 && bit < (int)v.size()) {
        if (x & 1) {
            v[bit]--;
        }
        x >>= 1;
        bit++;
    }
}

bool func(int k,vector<int> &v){
    int n = v.size();
    vector<int> bits(22,0);
    for(int i = 0;i<k;i++) incIndexForSetBits(v[i],bits);
    int start = 1;int end = start+k-1;
    vector<int> freq = bits;
    while(end<n){
        decIndexForSetBits(v[start-1],freq);
        incIndexForSetBits(v[end],freq);
        for(int i = 0;i<22;i++){
            if(bits[i]>0 && freq[i]==0) return false;
            if(bits[i]==0 && freq[i]>0) return false;
        }
        end++;start++;
    }
    return true;
}

void check(vector<int> &v,int n){
    int low = 1;
    int high = n;
    int ans = high;
    while(low<=high){
        int mid = (low+high)/2;
        if(func(mid,v)){
            high = mid-1;
            ans = mid;
        }
        else low = mid+1;
    }
    cout<<ans<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    set<int> s;
	    for(int i = 0;i<n;i++) {int a;cin>>a;v[i]=a;s.insert(v[i]);}
	    if(s.size()==1) {cout<<1<<endl;continue;}
	    check(v,n);
	}

}