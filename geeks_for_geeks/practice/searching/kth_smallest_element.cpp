// PASSED
// https://practice.geeksforgeeks.org/problems/kth-smallest-element/0 
#include<bits/stdc++.h>
using namespace std;

int util(vector <int> &v, int n, int k)
{
    priority_queue <int> min_heap;
    for(int i=0; i<n; i++)
    {
        min_heap.push(v[i]);
        if(min_heap.size() > k)
            min_heap.pop();
    }
    return min_heap.top();
}
int main()
 {
     int t; cin>>t;
	while(t--)
	{
	    int n; cin >>n; vector <int> v(n);
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	   int k; cin>>k;
	   cout<<util(v, n, k)<<"\n";
	}
	return 0;
}
