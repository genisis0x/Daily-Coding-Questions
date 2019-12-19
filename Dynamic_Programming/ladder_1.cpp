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

int ladder_bottom_up(int arr[], int k, int n)
{
	int dp[n+1];
	for(int i=0; i<=n; i++)
		dp[i]=0;
	dp[0] = 1;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=k; j++)
			if(i-j>=0 && arr[i-j] !=1)
				dp[i] += dp[i-j];
	}
	// for(int i=0; i<=n; i++)
	// 	cout<<dp[i]<<" ";
	// cout<<"\n";
	return dp[n];
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
	// cout<<ladder(arr, n, k, dp)<<endl;
	cout<<ladder_bottom_up(arr, k, n);
	return 0;
 }