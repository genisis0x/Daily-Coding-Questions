// PASSED
// https://practice.geeksforgeeks.org/problems/count-only-repeated/0/?track=SPCF-Searching&batchId=154
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void util (vector <ll> &v; ll n)
{
    int l = 0;
    int r = n-1;
    while(l< r)
    {
        int m =(r-l)/2 + l;
        if(v[m] >= m + v[0])
            l = m + 1;
        else
            r = m;
    }
    cout<<v[l]<<" "<<n -(a[n -1]-a[0])<<"\n";
}

int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    ll n; cin>>n; vector <ll> v(n);
	   for(ll i=0;i<n;i++)
	        cin>>v[i];
	}
	return 0;
}
