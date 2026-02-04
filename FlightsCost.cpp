#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll INF = LLONG_MAX;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int,ll>>> adj(n + 1);
    for(int i = 0; i < m; i++) {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }

    vector<vector<ll>> dist(n + 1, vector<ll>(2, INF));
    priority_queue<tuple<ll,int,int>, vector<tuple<ll,int,int>>, greater<>> pq;

    dist[1][0] = 0;
    pq.push({0, 1, 0});

    while(!pq.empty()) {
        auto [cost, u, used] = pq.top();
        pq.pop();

        if(cost != dist[u][used]) continue;

        for(auto &[v, w] : adj[u]) {
            if(dist[v][used] > cost + w) {
                dist[v][used] = cost + w;
                pq.push({dist[v][used], v, used});
            }

            if(used == 0) {
                ll discounted = w / 2;
                if(dist[v][1] > cost + discounted) {
                    dist[v][1] = cost + discounted;
                    pq.push({dist[v][1], v, 1});
                }
            }
        }
    }

    cout << dist[n][1] << "\n";
}
