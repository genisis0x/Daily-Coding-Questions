// Created by Manmeet Singh Parmar
// name of snippet-> temp.sublime-snippet
// path -> sublime text 3/packages/user/temp.sublime-snippet

#include <bits/stdc++.h>
using namespace std;
#define int long long

typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;

#define FOR(i, n)  for(int i=0; i<(n); i++)
#define FORA(i, a, n) for(int i = a; i <= (n); ++i)
#define FORD(i, a, n) for(int i = a; i >= (n); --i);
#define mod 1000000007
#define pi 2acos(0.0)
#define MP make_pair
#define PB push_back
#define EB emplace_back // its's faster than push_back
#define F first
#define S second
#define sz(x) (int)(x).size()
#define what_is(x) cerr << #x << "is" << x << endl;
int gcd(int a,int b) { while(a!=b) {if(a>b) a -=b; else b -=a;}
	return a;
}




bool dfs(int v, int color, vector<bool> &vis, unordered_map<int,vector<int>> &adj, vector<int> &col) {
	vis[v] = 1;
	col[v] = color;
	for(auto child : adj[v]) {
		if(!vis[child]) {
			if(!dfs(child, color^1, vis, adj, col)) {
				// cout << "Suspicious bugs found!\n";
				return false;
			}
		}
		else if(col[v]==col[child]) {
			// cout << "Suspicious bugs found!\n";
			return false;
		}
	}
	// cout << "No suspicious bugs found!\n";
	return true;
}


int32_t main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,v,e, a, b;
    cin>>t;
    int j = 1;
    while(j <= t){
    	cin >> v >> e;
    	vector<int> col(2001, 0);
    	unordered_map<int,vector<int>> adj;
    	for(int i=0; i<e; ++i) {
    		cin >> a >> b;
    		adj[a].push_back(b);
    		adj[b].push_back(a);
    	}
    	vector<bool> vis(2001, 0);
    	cout << "Scenario #" << j << ":\n";
    	bool flag = 1;
    	for(auto i : adj) {
    			if(!vis[i.first]) {
    				if(!dfs(i.first, 0, vis, adj,col)) flag = 0;
    			}
    	}
    	j++;
    	if(flag)
    		cout << "No suspicious bugs found!" << '\n';
    	else
    		cout << "Suspicious bugs found!" << '\n';

    }
    return 0;
}