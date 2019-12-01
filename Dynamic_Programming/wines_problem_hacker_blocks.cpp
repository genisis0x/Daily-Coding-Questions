// Wine problem 
#include <bits/stdc++.h>
using namespace std;

int recursion(int arr[], int s, int e, int y)
{
	if(s>e)
		return 0;
	int a = arr[s]*y + recursion(arr, s+1, e, y+1);
	int b = arr[e]*y + recursion(arr, s, e-1, y+1);
	return max(a,b);
}

int tp[1<<17][1<<17] = {0};

int top_bottom(int arr[], int s, int e, int y)
{
	if(s>e)
		return 0;
	if(tp[s][e]!=0)
		return tp[s][e];
	int a = arr[s]*y + top_bottom(arr, s+1, e, y+1);
	int b = arr[e]*y + top_bottom(arr, s, e-1, y+1);
	return tp[s][e] = max(a,b);

}

// Bottom Up DP Program to calculate the maximum profit from the given price of wines.
int maximunProfit_bottom_up(int cost[], int size)
{
	int dp[size][size]; // 2-D array stores the optimal action for each state start,end
	int sell[size][size]; // 2-D array to store the beg and end 
	int start, end; // Index to traverse from beginning and ending.
	for(start = size-1; start >= 0; start--) 
	{
		for(end = 0; end < size; end++)
		{
			if(start > end) // This is the base case when all the values are set to 0.
				dp[start][end] = 0;
			else if(start == end) // if the start and end is same it implies that last element is executed.
				dp[start][end] = size * cost[start];
			else // Evaluate the maximum profit.
			{
				int year = (size-(end-start)); // The year at any stage is the length of elements which are not in range of start to end.

				int a = cost[start] * year + dp[start+1][end]; // First case when start index is taken into consideration.
				
				int b = cost[end] * year + dp[start][end-1]; // Second case when end index is taking into consideration.
				
				dp[start][end] =  max(a,b); // Maximum value of both the case is the value at each state.
				
				if(a >= b)
					sell[start][end] = 0;
				else
					sell[start][end] = 1;
			}
		}
	}
	start = 0; 
	end = size-1;
	while(start <= end) // Loop to the order of the execution to reach maximum profit.
	{
		if(sell[start][end] == 0)
		{
			cout << "beg "; start++;
		}
		else
		{
			cout << "end "; end--;
		}
	}
	cout<<"\n";
	return dp[0][size-1];
}
int main()
{
 //   	#ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

 //    ios_base::sync_with_stdio(false);
 //    cin.tie(NULL);
	
	// int n; cin>>n; int arr[n];
	// for(int i=0; i<n; i++)
	// 	cin>>arr[i];
	// cout<<recursion(arr, 0, n-1, 1)<<"\n";
	// cout<<top_bottom(arr, 0, n-1, 1)<<"\n";
	// COST ARRAY
	int cost[] = {1, 2, 3, 5, 2};
	
	int size = sizeof(cost) / sizeof(cost[0]);
	
	cout << maximunProfit_bottom_up(cost,size) << endl;
	
	return 0;
}