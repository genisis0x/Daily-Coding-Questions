// PASSED
// https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0


// 0.7 sec compile time
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    vector<int> arr(n);
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    vector<int> v;
	    int max = arr[n-1];
	    for(int i=n-1; i>=0; i--)
	    {
	        if(arr[i] >= max)
	        {
	            max = arr[i];
	            v.push_back(arr[i]);
	        }
	    }
	    reverse(v.begin(), v.end());
	    for(auto i=v.begin(); i!=v.end(); i++)
	        cout<<*i<<" ";
	    cout<<"\n";
	}
	return 0;
}

// M2

//0.74 sec compile time
/*
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
*/
