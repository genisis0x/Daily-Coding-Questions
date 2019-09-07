// PASSED
//https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0 

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n; vector <int> v(n);
	    for(int i=0 ; i<n; i++)
	        cin>>v[i];
	    int c_sum = v[0];
	    int f_sum = v[0];
	    for(int i = 1; i<n;i++)
	    {
	        c_sum = max(v[i], v[i] + c_sum);
	        f_sum = max(c_sum, f_sum);
	    }
	    cout<<f_sum<<"\n";
	}
	return 0;
}
