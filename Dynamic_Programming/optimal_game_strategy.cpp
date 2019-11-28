#include <bits/stdc++.h>
using namespace std;
// https://hack.codingblocks.com/app/contests/1108/p/428


int dp_util(vector<int> &v, int s, int e)
{
	if(s == e)
		return v[s];
	if(1+s==e)
		return max(v[s], v[e]);
	else
	{
		int a = (v[s] + min(dp_util(v, s+1, e-1), dp_util(v, s+2, e)));
		int b = (v[e] + min(dp_util(v, s+1, e-1), dp_util(v, s, e-2)));
		return max(a, b);
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int n; cin>>n; vector<int> v(n);
	for(int i=0; i<n; i++)
		cin>>v[i];
	cout<<dp_util(v, 0, n-1);
	return 0;
}