// https://hack.codingblocks.com/app/contests/1108/p/721

#include <bits/stdc++.h>
using namespace std;
#define ll long long
map<ll, ll> tab;
ll dp_solution(ll n)
{
	//recursion solution
	// if(n<12)
	// 	return n;
	// else
	// 	return max(n, recursion_solution(n/2)+recursion_solution(n/3)+recursion_solution(n/4));
	// DP memoization technique
	if(tab.count(n))
		return tab[n];
	if(n<12){
		tab[n] = n;
		return tab[n];
	}
	tab[n] = max(n, dp_solution(n/2)+dp_solution(n/3)+dp_solution(n/4));
	return tab[n];
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll n;
	cin>>n;
	cout<<dp_solution(n)<<"\n";
	return 0;
}