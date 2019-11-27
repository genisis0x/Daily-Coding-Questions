#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int lcs_3(string s1, string s2, string s3, int n, int m, int k)
{
	// Recursion Solution
	// if(n==0||m==0||k==0)
	// 	return 0;
	// if((s1[n-1]==s2[m-1]) && (s2[m-1]==s3[k-1]))
	// 	return 1+lcs_3(s1, s2, s3, n-1, m-1, k-1);
	// else{
	// 	int a = lcs_3(s1, s2, s3, n-1, m, k);
	// 	int b = lcs_3(s1, s2, s3, n, m-1, k);
	// 	int c = lcs_3(s1, s2, s3, n, m, k-1);
	// 	int d = lcs_3(s1, s2, s3, n-1, m-1, k);
	// 	int e = lcs_3(s1, s2, s3, n, m-1, k-1);
	// 	int f = lcs_3(s1, s2, s3, n-1, m, k-1);
	// 	return max(a, max(b, max(c,max(d,max(e,f)))));
	// }
	// Tabulization Concept (down to up)
	int memo[n+1][m+1][k+1];
	for(int i=0; i<=n; i++)
		for(int j=0; j<=m; j++)
			for(int l=0; l<=k; l++)
			{
				if(i==0 || j==0 || l==0)
					memo[i][j][l] = 0;
				else
				{
					if(s1[i-1]==s2[j-1] && s2[j-1]==s3[l-1])
						memo[i][j][l] = 1 + memo[i-1][j-1][l-1];
					else
					{
						int a = memo[i-1][j][l];
						int b = memo[i][j-1][l];
						int c = memo[i][j][l-1];
						int d = memo[i-1][j-1][l];
						int e = memo[i-1][j][l-1];
						int f = memo[i][j-1][l-1];
						memo[i][j][l] = max(a, max(b, max(c,max(d,max(e,f)))));
					}
				}
			}
	return memo[n][m][k];

}
int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	
 //    ios_base::sync_with_stdio(false);
 //    cin.tie(NULL);

	string s1, s2, s3; cin>>s1>>s2>>s3;
	cout<<lcs_3(s1, s2, s3, s1.length(), s2.length(), s3.length());
	return 0;
}