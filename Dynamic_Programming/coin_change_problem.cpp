#include <bits/stdc++.h>
using namespace std;

// https://practice.geeksforgeeks.org/problems/coin-change/0
int coin_calculator(vector<int> &v, int money, int m)
{

	// Recursion
	// if(money==0)
	// 	return 1;
	// if(m==0)
	// 	return 0;
	// int res = coin_calculator(v, money, m-1);
	// if(v[m-1] <= money)
	// 	res += coin_calculator(v, money-v[m-1], m);
	// return res;
	
	// DP
	int memo[money+1][m+1];
	for(int i=0; i<=money; i++)
		for(int j=0; j<=m; j++)
		{
			if(i==0)
				memo[i][j]= 1;
			else if(j==0)
				memo[i][j] = 0;
			else
			{
				memo[i][j] = memo[i][j-1];
				if(v[j-1] <= i)
					memo[i][j] += memo[i-v[j-1]][j];
			}
		}
	return memo[money][m];
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// input
	int money, m; cin>>money>>m;
	vector<int> v(m);
	for(int i=0; i<m; i++)
		cin>>v[i];
	cout<<coin_calculator(v, money, m)<<"\n";
}
