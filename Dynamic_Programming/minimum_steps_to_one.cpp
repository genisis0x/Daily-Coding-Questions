#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#include <chrono>
#include <algorithm>
using namespace std::chrono;


int recursion(int n)
{
	if(n==1)
		return 1;
	int a,b,c;
	a=b=c=INT_MAX;
	if(n%3==0)
		a = recursion(n/3) + 1;
	if(n%2==0)
		b = recursion(n/2) + 1;
	c = recursion(n-1) + 1;
	return min(a,min(b,c));
}

int top_down(int n, int dp[])
{
	if(n==1)
		return 1;
	if(dp[n]!=0)
		return dp[n];
	int a,b,c;
	a=b=c=INT_MAX;
	
	if(n%3==0)
		a = top_down(n/3, dp) + 1;
	if(n%2==0)
		b = top_down(n/2, dp) + 1;
	c = top_down(n-1, dp) + 1;
	dp[n] = min(a,min(b,c));
	return dp[n];
}
int bottom_up(int n)
{
	int dp[n];
	for(int i=0;i<n; i++)
		dp[i] = 0;
	int a,b,c;
	a=b=c=INT_MAX;
	for(int i=1; i<n; i++)
	{
		if(n%3==0)
			a = dp[i/3] + 1;
		if(n%2==0)
			b = dp[i/2] + 1;
		c = dp[i-1] + 1;
		dp[i] = min(a, min(b,c));
	}
	return dp[n-1];
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n; cin>>n;
	
	// TO GET THE OUTPUT OF ALL THE DP CASE AND RECURSION AND SEE HOW MUCH TIME EACH PROCESS TOOK.
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	cout<<recursion(n)<<endl;
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	duration<double> time_span = duration_cast<duration<double> >(t2 - t1);
	std::cout << "It took me " << time_span.count() << " seconds."<<endl;
	high_resolution_clock::time_point t3 = high_resolution_clock::now();
	int dp[n+1];
	for(int i=0; i<=n;i ++)
		dp[i] = 0;
	cout<<top_down(n, dp)<<endl;
	high_resolution_clock::time_point t4 = high_resolution_clock::now();
	time_span = duration_cast<duration<double> >(t4 - t3);
	high_resolution_clock::time_point t5 = high_resolution_clock::now();
	std::cout << "It took me " << time_span.count() << " seconds."<<endl;
	cout<<bottom_up(n)<<endl;
	high_resolution_clock::time_point t6 = high_resolution_clock::now();
	time_span = duration_cast<duration<double> >(t6 - t5);
	std::cout << "It took me " << time_span.count() << " seconds."<<endl;

	return 0;
}