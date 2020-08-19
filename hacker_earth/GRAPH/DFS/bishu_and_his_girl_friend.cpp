/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

// https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/bishu-and-his-girlfriend/description/

#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1001];
vector<bool> vis(1001, 0);
vector<int> dis(1001, 0);

void dfs(int v, int d) {
    vis[v] = 1;
    dis[v] = d;
    for(int child : adj[v]) {
        if(!vis[child])
            dfs(child, dis[v] + 1);
    }
}
int main() {
    int n, u, v; cin >> n;
    for(int i=1; i<n; ++i) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1; i<=n; ++i) {
        if(!vis[i])
            dfs(i, 0);
    }
    int r,q; cin >> q;
    int ans = INT_MAX, idx = -1;
    for(int i=1; i<=q; ++i) {
        cin >> r;
        if(dis[r] < ans) {
            ans = dis[r];
            idx = r;
        }
    }
    cout << idx << '\n';
    return 0;

}

