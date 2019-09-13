// PASSED
// https://practice.geeksforgeeks.org/problems/trapping-rain-water/0
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    vector <ll> v(n);

	    for(int i=0; i<n; i++)
	        cin>>v[i];
	    int low = 0;
	    int high = n-1;
	    int l_max = 0;
	    int r_max = 0;
	    int vol = 0;
	    while(low <= high)
	    {
	        if(v[low] < v[high])
	        {
    	        if(v[low] > l_max)
    	           l_max = v[low];
    	        else
    	            vol += l_max - v[low];
    	        low++;
	        }
	        else
	        {
	            if(v[high] > r_max)
	                r_max = v[high];
	            else
	                vol += r_max - v[high];
	            high--;
	        }
	    }
	    cout<<vol<<"\n";
	}
	return 0;
}
