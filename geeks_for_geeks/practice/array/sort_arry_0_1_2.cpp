// PASSED
// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0 
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n; vector <int> v(n);
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	    int arr[3] = {0};
	    for(int i =0; i<n; i++)
	    {
	        if(v[i] == 0)
	            arr[0] += 1;
	        else if(v[i] == 1)
	            arr[1] += 1;
	        else
	            arr[2] += 1;
	    }
	   // for(int i=0 ;i < 3; i++)
	   //     cout<<arr[i]<<" ";
	    for(int i=0; i<arr[0]; i++)
	        cout<<0<<" ";
	    for(int i=0; i<arr[1]; i++)
	        cout<<1<<" ";
	    for(int i=0; i<arr[2]; i++)
	        cout<<2<<" ";
	    cout<<"\n";
	}
	return 0;
}
