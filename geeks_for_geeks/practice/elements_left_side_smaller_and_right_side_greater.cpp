// PASSED
// https://practice.geeksforgeeks.org/problems/unsorted-array/0
#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t; cin>>t;
    while(t--)
    {
    	int n; cin>>n; vector<int> arr(n);
    	for(int i=0; i<n; i++)
    	    cin>>arr[i];

    	vector <int>l_max(n);
        vector <int>r_min(n);
        l_max[0]=INT_MIN;
        r_min[n-1]=INT_MAX;

    	for(int i=1; i<n; i++)
    	    l_max[i] = max(l_max[i-1], arr[i-1]);
    	for(int i=n-2; i>-1; i--)
    	    r_min[i] = min(r_min[i+1], arr[i+1]);
    	int i;
    // 	for(int i=0; i<n; i++)
    // 	    cout<<l_max[i]<<" ";
    // 	cout<<"\n";
    // 	for(int i=0; i<n; i++)
    // 	    cout<<r_min[i]<<" ";
    	for(i=1; i<n -1; i++)
    	{
    	    if(arr[i] >= l_max[i] && arr[i] <= r_min[i])
    	    {
    	        cout<<arr[i];
    	        break;
    	    }
    	}
    	if(i==n-1)
    	    cout<<-1;
    	cout<<"\n";
    }
    return 0;
 }
