#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define MOD 1000000007


// https://practice.geeksforgeeks.org/problems/edit-distance/0

int recursive_solution(string s1, string s2, int n, int m)
{
    // Recursion
    // if(n==0)
    //     return m;
    // if(m==0)
    //     return n;
    // if(s1[n-1]==s2[m-1])
    //     return recursive_solution(s1, s2, n-1, m-1);
    // else
    // {
    //     return 1+ min(recursive_solution(s1, s2, n, m-1), min(recursive_solution(s1, s2, n-1, m),recursive_solution(s1, s2, n-1, m-1)));
    // }
    // DP Tabulization technique 
    int memo[n+1][m+1];
    for(int i=0; i<=n; i++)
        for(int j=0; j<=m; j++)
        {
            if(i==0)
                memo[i][j] = j;
            else if(j==0)
                memo[i][j] = i;
            else if (s1[i-1]==s2[j-1])
                memo[i][j] = memo[i-1][j-1];
            else
                memo[i][j] = 1 + min(min(memo[i-1][j], memo[i][j-1]), memo[i-1][j-1]);
        }
    return memo[n][m];
}
int main()
 {
	int t; cin>>t; 
	while(t--)
	{
	    int p,q; cin>>p>>q;
	    string s1, s2; cin>>s1>>s2;
	    cout<<recursive_solution(s1, s2, p, q)<<"\n";
	}
	return 0;
}