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
vector<int> adj[10001];
vector<bool> vis(10001, 0);
   
void dfs(int v) {
	vis[v] = 1;
	for(auto node : adj[v]) {
		if(!vis[node])
			dfs(node);
	}
}

int32_t main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; cin >> n >> m;
    int u,v;
    int cc_count = 0;
    if(n != m+1) cout << "NO\n";
    else {
    	for(int i=0; i<m; ++i) {
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	for(int i=1; i<=n; ++i) {
    		if(!vis[i]) {
    			dfs(i);
    			cc_count++;
    		}
    	}
    	if(cc_count == 1)
    		cout << "YES\n";
    	else
    		cout << "NO\n";
    }
    return 0;
}