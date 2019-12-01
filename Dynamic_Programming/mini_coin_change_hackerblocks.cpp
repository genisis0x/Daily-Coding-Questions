// 1, 2, 5 10, 20, 50, 100, 200, 500, 2000

//change->137

#include <bits/stdc++.h>
using namespace std;

int recursion(int arr[], int n, int t)
{
	if(t==0)
		return 0;
	int sum = INT_MAX;
	for(int i=0; i<n; i++)
	{
		if(t - arr[i]>=0)
			sum = min(sum, 1 + recursion(arr, n, t-arr[i]));
	}
	return sum;
}


int top_down(int arr[], int n, int t, int dp[])
{
	if(t==0)
		return 0;
	if(dp[t]!=0)
		return dp[t];
	int sum = INT_MAX;
	for(int i=0; i<n; i++)
	{
		if(t - arr[i]>=0)
			sum = min(sum, 1 + top_down(arr, n, t-arr[i], dp));
	}
	return dp[t]=sum;
}


int bottom_up(int arr[], int n, int t)
{
	// t is the state of the coin getting changed.
	int dp[t+1];
	dp[0] =0;
	for(int i=1; i<=t; i++)
	{
		dp[i]=INT_MAX;
		for(int j=0; j<n; j++)
		{
			if(i-arr[j] >=0)
				dp[i] = min(dp[i], 1 + dp[i-arr[j]]);
		}
	}
	return dp[t];
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n; cin>>n;
	int arr[n]; 
	for(int i=0; i<n; i++)
		cin>>arr[i];
	int t; cin>>t;
	int dp[t+1];
	for(int i=0; i<=t; i++)
		dp[i]=0;
	cout<<recursion(arr, n, t)<<endl;
	cout<<top_down(arr, n, t, dp)<<endl;
	cout<<bottom_up(arr, n, t)<<endl;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
