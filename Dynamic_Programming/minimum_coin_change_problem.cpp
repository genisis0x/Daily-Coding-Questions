#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define MOD 1000000007


// https://practice.geeksforgeeks.org/problems/number-of-coins/0

int recursion_min_no_coins(vector<int> &v, int cents, int n)
{
    // RECURSION
    // if(cents==0) return 0;
    // int final = INT_MAX;
    // for(int i=0; i<n; i++){
    //     if(v[i] <= cents)
    //     {
    //         int res =  1 + recursion_min_no_coins(v, cents-v[i], n);
    //         if(res!= INT_MIN)
    //             final = min(res, final);
    //     }
    // }
    // return final;
    int dp[cents+1];
    for(int i=1; i<=cents; i++)
        dp[i] = INT_MAX;
    dp[0] = 0;
    for(int i=1; i<=cents; i++)
    {
      for(int j=0; j<n; j++)
      {
            if(v[j] <= i)
            {
                int r = 1 + dp[i-v[j]];
                if(r!= INT_MIN)
                    dp[i] = min(dp[i], r);
            }
      }
    }
    // for(int i=0; i<=cents; i++)
    //     cout<<dp[i]<<" ";
    // cout<<"\n";
    if(dp[cents] !=INT_MAX)
        return dp[cents];
    else
        return -1;
}



int main()
 {
	int t; cin>>t; 
	while(t--)
	{
	    int cents; cin>>cents; int n; cin>>n;
	    vector<int> arr(n);
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    cout<<recursion_min_no_coins(arr, cents, n)<<"\n";
	}
	return 0;
}
