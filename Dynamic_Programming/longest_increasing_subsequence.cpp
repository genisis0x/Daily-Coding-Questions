#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define MOD 1000000007


// https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence/0
void util_Lis(vector<int> &v, int n){
    int lis[n];
    lis[0]= 1;
    int max_v = lis[0];
    for(int i=1; i<n; i++)
    {
        lis[i] =1;
        for(int j=0; j<i; j++)
        {
            if(v[i] > v[j])
                lis[i] = max(lis[i], 1+lis[j]);
        }
        max_v = max(max_v, lis[i]);
    }
    // for(int i=0; i<n; i++)
    //     cout<<lis[i]<<" ";
    // cout<<"\n";
    cout<<max_v<<"\n";
}


int main()
 {
	int t; cin>>t; 
	while(t--)
	{
	    int n; cin>>n;
	    vector<int> arr(n);
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    util_Lis(arr, n);
	}
	return 0;
}
