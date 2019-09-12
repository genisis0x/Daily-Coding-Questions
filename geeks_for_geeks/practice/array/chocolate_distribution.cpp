// PASSED
// https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem/0
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    // input start
    	int no_of_packets;
    	cin>>no_of_packets;
    	vector<ll> arr(no_of_packets);
    	for(int i=0; i<no_of_packets; i++)
    	    cin>>arr[i];
    	int m; cin>>m;
    	// input end
    	sort(arr.begin(), arr.end());
    	ll min_sum = LONG_MAX;
    	for(int i=0; i+m-1<no_of_packets; i++)
    	    min_sum = (arr[i+m-1] - arr[i] < min_sum) ? (arr[i+m-1] -arr[i]) : min_sum;
    	cout<<min_sum<<"\n";
	}
	return 0;
}
