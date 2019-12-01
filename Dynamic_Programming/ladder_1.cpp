#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
// ll g_sum =0;

// Recursive solution 
// https://hack.codingblocks.com/app/contests/1108/p/268


int ladder(int arr[], int n, int k, int dp[])
{
	if(n==0)
		return 1;
	if(dp[n]!=0)
		return dp[n];
	ll sum = 0;
	for(int i=1; i<=k; i++)
	{
		if(n-i>=0 && arr[n-i]!=1)
			sum += ladder(arr, n-i, k,dp)%MOD;
	}
	return dp[n] = sum;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,k; cin>>n>>k;
	int arr[n];
	int dp[n+1];
	for(int i=0; i<=n; i++)
		dp[i] = 0;
	for(int i=0; i<n; i++)
		cin>>arr[i];
	cout<<ladder(arr, n, k, dp)<<endl;
	return 0;
 }