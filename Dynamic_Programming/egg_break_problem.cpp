// https://hack.codingblocks.com/app/contests/1179/p/75
#include<bits/stdc++.h>
using namespace std;

// int Recursion(int no_of_egg, int floor)
// {
// 	if(floor==0 or floor==1)
// 		return floor;
// 	if(no_of_egg==1)
// 		return floor;
// 	int min_value = INT_MAX;
// 	for(int i=1; i<=floor; i++)
// 	{
// 		int egg_break = Recursion(no_of_egg-1, i-1);
// 		int egg_not_break = Recursion(no_of_egg, floor-i);
// 		min_value = min(min_value, max(egg_break,egg_not_break));
// 	}
// 	return 1 + min_value;
// }


int dp_solution_bottom_up(int no_of_egg, int floor)
{
	int dp[no_of_egg+1][floor+1];
	for(int i=1; i<=no_of_egg ;i++)
	{
		dp[i][0] = 0;
		dp[i][1] = 1;
	}
	for(int i=1; i<=floor; i++)
		dp[1][i] = i;
	for(int i=2; i<=no_of_egg; i++)
	{
		for(int j=2; j<=floor; j++)
		{
			dp[i][j] = INT_MAX;
			for(int k=1; k<=j; k++)
				dp[i][j] = min(dp[i][j], 1+max(dp[i-1][k-1], dp[i][j-k]));
		}
	}
	return dp[no_of_egg][floor];

}

int main() {
	int t; cin>>t;
	while(t--)
	{
		int k, n; cin>>k>>n;
		// cout<<Recursion(k, n)<<endl;
		cout<<dp_solution_bottom_up(k, n)<<endl;
	}
	return 0;
}
