// PASSED
// https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    vector<int> v(n);
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	    vector <int> r_max(n+1);
	    r_max[n] = INT_MIN;
	    for(int i=n-1; i>=0; i--)
	    {

	        r_max[i] = max(r_max[i+1], v[i]);
	    }
	   // for(int i=0; i<=n; i++)
	   // {
	   //     cout<<r_max[i]<<" ";
	   // }
	   // cout<<"\n";
	    for(int i=0; i<n; i++)
	    {
	        if(v[i] >= r_max[i])
	            cout<<v[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
