#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long

int optimal_game(int arr[], int s, int e, int dp[])
{
	if(s==e)
		return arr[e];
	else if(s+1==e)
		return max(arr[s], arr[e]);
	else
	{
		int a = arr[s] += min(optimal_game(arr, s+1, e-1), optimal_game(arr, s+2, e));
		int b = arr[e] += min(optimal_game(arr, s+1, e-1), optimal_game(arr, s, e-2));
		return dp[n] = max(a,b);
	}
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
	int dp[n];
	for(int )
	cout<<optimal_game(arr,0, n-1, dp)<<endl;
	return 0;
}