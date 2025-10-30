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
        bool e = false;
        bool o = false;
        vector<long long> arr(n);
        for(int i = 0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2 != 0) o = true;
            else e = true;
        }
        if(e && o){
            sort(arr.begin(),arr.end());
            for(int i = 0;i<n;i++){
                cout<<arr[i]<<" ";
            }
        } 
        else{
            for(int i =0;i<n;i++){
                cout<<arr[i]<<" ";
            }   
        }
        cout<<endl;
    }
}