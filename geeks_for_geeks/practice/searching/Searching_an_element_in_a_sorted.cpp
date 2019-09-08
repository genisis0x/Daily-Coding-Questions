// PASSED
// https://practice.geeksforgeeks.org/problems/who-will-win/0
#include<bits/stdc++.h>
using namespace std;
int util(vector <int> v, int k, int l, int r)
{
    // 0.62 execution time
    while(l <= r)
    {
        int mid = (r - l)/ 2 + l;
        if(v[mid] == k)
            return 1;
        else if(v[mid] < k)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
    // 0/67 execution time
    // if(l <= r)
    // {
    //     int mid = (r - l) / 2 + l;
    //     if(v[mid] == k)
    //         return 1;
    //     if(v[mid] < k)
    //         return util(v, k, mid +1, r);
    //     return util(v, k, l, mid -1);
    // }
    // return -1;
}

int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    int n, k; cin>>n>>k; vector<int> v(n);
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	    cout<<util(v,k, 0, n -1)<<"\n";
	}
	return 0;
}
