// PASSED
// https://practice.geeksforgeeks.org/problems/count-the-triplets/0
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n; vector <int> v(n);
	    for(int i=0; i<n;i++)
	        cin>>v[i];
	    sort(v.begin(), v.end());
	    int count = 0;
	    for(int i=n-1;i>0;i--)
		{
	    	int l=0;
	    	int r=i-1;
	    	while(r!=l)
	    	{
	        	if(v[l]+v[r]==v[i])
	        	{
	        		count++;
	        		r--;
	        	}
	        	else if(v[l]+v[r]<v[i])
	        		l++;
	        	else
	        		r--;
	    	}
	    }
	    if(count)
	        cout<<count<<"\n";
	    else
	        cout<<-1<<"\n";
	  }
	  return 0;
}

// 1 5 3 2
// 1 2 3 5
// 1 3 6 11
