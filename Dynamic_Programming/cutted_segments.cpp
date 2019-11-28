#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define MOD 1000000007


https://practice.geeksforgeeks.org/problems/cutted-segments/0
void dp_cut_seg(int n, int x, int y, int z){
    
    int dp[n+1];
    dp[0] = 0;
    for(int i=1; i<=n; i++){
        dp[i]= -1;
        if(i-x >=0) dp[i] = max(dp[i], dp[i-x]);
        if(i-y >=0) dp[i] = max(dp[i], dp[i-y]);
        if(i-z >=0) dp[i] = max(dp[i], dp[i-z]);
        if(dp[i]!= -1)
            dp[i] += 1;
    }
    cout<<dp[n]<<"\n";
    
}
int main()
 {
	int t; cin>>t; 
	while(t--)
	{
	    int n; int x,y,z; cin>>n>>x>>y>>z;
	    dp_cut_seg(n, x, y, z);
	}
	return 0;
}
