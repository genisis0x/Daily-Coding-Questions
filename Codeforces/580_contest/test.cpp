// Created by Ritesh tourist nikhoriya
#include <bits/stdc++.h>
using namespace std;
 

int main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	int a[n];
	for (int y = 0; y < n; y++)
	{
		cin>>a[y];
	}
	int m;
	cin>>m;
	int b[m];
	for (int l = 0; l < m; l++)
	{
		cin>>b[l];
	}
	int arr[n + m];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		arr[i] = a[i];
	}
	// for(int d = 0; d < n + m; d++)
	// 	cout<<arr[d]<<" ";
	// cout<<"\n---------\n";
	// cout<<i<<"\n";
	int k = -1;
	while(++k < m)
	{
		arr[i + k] = b[k];
		//cout<<i+k<<"\n";
	}
	// for(int d = 0; d < n + m; d++)
	// 	cout<<arr[d]<<" ";
	for (int u = 0; u < n; u++)
	{
		for (int s = 0; s < m; s++)
		{
			// u_temp = 0;
			// s_temp = 0;
			for(int t =0; t < n + m; t++)
			{
				if(arr[t] == )
			}
		}
	}
    return 0;
}