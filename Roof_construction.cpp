#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
		cin>>n;
		vector<int> v(n);
		int num=n-1;
		bool p = false;
		for(int i=0;i<n;i++){
			v[i]=num;
			if(p==false && (num & (num-1))==0) {num=0; p=true;}
			else if(p==false) num--;
			else num++;
			cout<<v[i]<<" ";
		}
		cout<<endl;



	} 

}
