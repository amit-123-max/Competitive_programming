#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int total=n*n;
        if(k ==total-1){
            cout<<"NO"<<endl;
            continue;
        }
        else if(n== 2){
            if(k== 3) cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                if(k==0) {cout <<"RD"<<endl<<"UL"<<endl;}
                else if(k == 1) {cout << "UD"<<endl<<"RU"<<endl; }
                else if(k == 2) {cout << "DU"<<endl<<"UU"<<endl; }
                else {cout << "UU"<<endl<<"UU"<<endl;; }
            }
            continue;
        }
        else{
        vector<int> a(n,0);
        int rem = k;
        int col = 0;

        int f = rem/n;
        if(f > n) f = n;
        int i = 0;
        while(i<f && col<n){
            a[col++] = n;
            i++;
        }
        rem = rem - f * n;

        if(col<n&&rem>0){
            if(rem == n-1){
                if(col+1 < n){
                    a[col] = n-2;
                    a[col+1] = 1;
                    col += 2;
                }
                else a[col++] = rem;
            }
            else a[col++] = rem;
        }

        vector<string> grr(n,string(n,'D'));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i < a[j] || i == n-1) grr[i][j] = 'U';
            }
        }

        cout << "YES"<<endl;
        for(int i = 0; i < n; i++) cout << grr[i] << endl;
    }
}

}

