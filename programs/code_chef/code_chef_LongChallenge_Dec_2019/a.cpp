#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	 #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int t,n,min_dist=INT_MAX;
	cin>>t;
	while(t--)
	{
		int ref[26] = {0};
		cin>>n;
		char arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			if(ref[arr[i]-'a'] !=0)
				min_dist = min(min_dist, i+1-ref[arr[i]-'a']);
			ref[arr[i]-'a'] = i+1;
		}
		cout<<n-min_dist<<endl;
	}
	return 0;
}