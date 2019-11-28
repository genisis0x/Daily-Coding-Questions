// https://hack.codingblocks.com/app/contests/1108/p/881


#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll memo[2000+1][2000+1][200+1];
ll recursion_solution(vector<ll> &v1, vector<ll> &v2, int n, int m, int k)
{
	// RECURSSION
	// if(n==0 || m==0)
	// 	return 0;
	// if(k==0)
	// 	return 0;
	// if(v1[n-1]==v2[m-1])
	// 	return 1 + recursion_solution(v1, v2, n-1, m-1, k);
	// else
	// {
	// 	return max(max(recursion_solution(v1, v2, n-1, m, k),recursion_solution(v1, v2, n, m-1, k)), 1 + recursion_solution(v1, v2, n-1, m-1, k-1));
	// }
	// DP
	// ll memo[n+1][m+1][k+1];
	// for(int i=0; i<=n; i++)
	// 	for(int j=0; j<=m; j++)
	// 		for(int l=0; l<=k; l++)
	// 		{
	// 			if(i==0||j==0||l==0)
	// 				memo[i][j][l] = 0;
	// 			else
	// 			{
	// 				if(v1[i-1]==v2[j-1])
	// 				{
	// 					ll a = memo[i-1][j][l];
	// 					ll b = memo[i][j-1][l];
	// 					ll c = 1 + memo[i-1][j-1][l];
	// 					memo[i][j][l] = max(max(a,b), c);
	// 				}
	// 				else
	// 				{
	// 					ll a = memo[i-1][j][l];
	// 					ll b = memo[i][j-1][l];
	// 					ll c = 1 + memo[i-1][j-1][l-1];
	// 					memo[i][j][l] = max(max(a,b), c);
	// 				}
	// 			}
	// 		}
	// return memo[n][m][k];
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll n,m,k;
	cin>>n>>m>>k;
	vector<ll> v1(n);
	vector<ll> v2(m);
	for(int i=0; i<n; i++)
		cin>>v1[i];
	for(int i=0; i<m; i++)
		cin>>v2[i];
	memset(memo, -1, sizeof(memo));
	cout<<recursion_solution(v1, v2, n, m, k)<<"\n";
	return 0;
}