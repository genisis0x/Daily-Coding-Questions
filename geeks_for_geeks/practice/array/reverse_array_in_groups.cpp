// PASSED
// https://practice.geeksforgeeks.org/problems/reverse-array-in-groups/0
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    int k; cin>>k;
	    vector <ll> arr(n);
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	   for (int i = 0; i < n; i += k)
	   {
	       int left = i;
	       int right = min(i + k, n);
	       reverse(arr.begin()+left, arr.begin()+right);
	   }
	   for(int i=0; i<n; i++)
	        cout<<arr[i]<<" ";
	   cout<<"\n";
	}
	return 0;
}
