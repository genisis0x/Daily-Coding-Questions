// PASSED
// https://practice.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion/0
#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t; cin>>t;
     while(t--)
     {
	    int n; cin>>n;
	    vector <int> v(n);
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	    int flag = 1;
	    for(int i=0; i<n-1; i++)
	    {
	        if(v[i] > v[i+1] && flag)
	            swap(v[i], v[i+1]);
	        else if(!flag && v[i] < v[i+1])
	            swap(v[i], v[i+1]);
	        flag = !flag;
	    }
	    for(int i=0; i<n; i++)
	        cout<<v[i]<<" ";
	   cout<<"\n";
     }
	return 0;
}
