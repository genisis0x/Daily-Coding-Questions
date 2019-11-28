#include <bits/stdc++.h>
using namespace std;
// https://hack.codingblocks.com/app/contests/1108/p/277


void dp_lcs(string s1, string s2, int n, int m)
{
	int table[n+1][m+1];
	int start = 0;
	int flag =1;
	int end = 0;
	for(int i=0; i<=n; i++)
		for(int j=0; j<=m; j++)
		{
			if(i==0||j==0)
				table[i][j]=0;
			else
			{
				if(s1[i-1]==s2[j-1])
				{
					// if(flag)
					// {
					// 	start = j-1;
					// 	flag = !flag;
					// }
					table[i][j] = 1 + table[i-1][j-1];
				}
				else
					table[i][j] = max(table[i-1][j], table[i][j-1]);
			}
		}
		// cout<<table[n][m];
	int i=n; int j=m;
	string res= "";
	while(i>0 & j>0)
	{
		if(s1[i-1]==s2[j-1]){
			res += s1[i-1];
			i--; j--;
		}
		else if(table[i-1][j] > table[i][j-1])
			i--;
		else
			j--;
	}
	reverse(res.begin(), res.end()); cout<<res<<"\n";
}



int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	string s1,s2; cin>>s1>>s2;
	dp_lcs(s1, s2, s1.length(), s2.length());
	return 0;
}