// PASSED
// https://practice.geeksforgeeks.org/problems/pythagorean-triplet/0
#include<bits/stdc++.h>
using namespace std;
int is_pair(vector<int> &v, int s, int e, int sum)
{
    while(s < e)
    {
        if(v[s] + v[e] == sum)
        {

            // cout<<s<<" "<<e;
            return 1;

        }
        v[s] + v[e] < sum ? s++ : e--;
    }
    return 0;
}


bool is_triplet(vector<int> &v, int n)
{
    for(int i=n-1; i >=2; i--)
	    {
	        if(is_pair(v, 0, i-1, v[i]))
	            return true;
	    }
}


int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    vector<int> v(n);
	    for(int i=0; i<n; i++)
	    {
	        int r; cin>>r;
	        v[i] = r *r;
	    }
	    sort(v.begin(), v.end());
	   // for(int i=0; i<n; i++)
	   //     cout<<v[i]<<" ";
	    is_triplet(v, n) ? cout<<"Yes" : cout<<"No";
	    cout<<"\n";
	}
	return 0;
}
