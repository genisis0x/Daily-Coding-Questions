/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

// https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/description/

#include <bits/stdc++.h>
using namespace std;
void dfs(int node, unordered_map<int, vector<int>> &adj, vector<bool> &vis) {
    vis[node] = 1;
    for(auto i : adj[node]) {
        if(vis[i]==0) {
            dfs(i, adj, vis);
        }
    }
}
int main() {
     int n,e; cin >> n >> e;
     unordered_map<int, vector<int>> adj;
     int u,v;
     for(int i=1; i <= e; ++i) {
          cin >> u >> v;
          adj[u].push_back(v);
          adj[v].push_back(u);
     }
     int cc_count = 0;
     vector<bool> vis(n+1,0);
     for(int i=1; i <= n; ++i) {
         if(vis[i]==0) {
             cc_count++;
             dfs(i, adj, vis);        
         }
     }
     cout << cc_count << '\n';
}

