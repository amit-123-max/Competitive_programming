#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int n,m,q;
	cin>>n>>m>>q;
	const long long INF = 4e18;
	vector<vector<int>> dist(n+1,vector<int>(n+1,INF));
	for(int i = 0;i<m;i++){
	    int x,y,z;
	    cin>>x>>y>>z;
	    dist[x][y] = min(dist[x][y], (long long)z);
        dist[y][x] = min(dist[y][x], (long long)z);
	}
	for(int i=1;i<=n;i++) dist[i][i]=0;
	for(int via = 1;via<=n;via++){
	    for(int i = 1;i<=n;i++){
	        for(int j = 1;j<=n;j++){
	            if(dist[i][via] < INF && dist[via][j] < INF) dist[i][j] = min(dist[i][j],dist[i][via]+dist[via][j]);
	        }
	    }
	}
	for(int i = 0;i<q;i++){
	    int x,y;cin>>x>>y;
	    if(dist[x][y]==INF) cout<<-1<<endl;
	    else cout<<dist[x][y]<<endl;
	}
}
