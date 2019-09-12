// PASSED
// https://practice.geeksforgeeks.org/problems/equilibrium-point/0
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    vector <int> v(n);
	    int t_s = 0;
	    for(int i= 0; i<n; i++)
	    {
	        cin>>v[i];
	        t_s += v[i];
	    }
	    int r_s = 0;
	    int i;
	    for(i=0; i<n; i++)
	    {
	        t_s -=v[i];
	        if(t_s == r_s)
	        {
	            cout<<i+1<<"\n";
	            break;
	        }
	        r_s +=v[i];
	    }
	    if(i == n)
	        cout<<-1<<"\n";
	}
	return 0;
}
