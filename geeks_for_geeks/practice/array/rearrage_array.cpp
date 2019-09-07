// PASSED
// https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately/0/ 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n; vector <ll> arr(n);
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	   ll min_idx = 0;
	   ll max_idx = n - 1;
	   ll max_elem = arr[max_idx] + 1;
	   for (int i = 0; i < n; i++) {
        // at even index : we have to put maximum element
        if (i % 2 == 0) {
            arr[i] += (arr[max_idx] % max_elem) * max_elem;
            // cout<<arr[i]<<" ";
            max_idx--;
        }

        // at odd index : we have to put minimum element
        else {
            arr[i] += (arr[min_idx] % max_elem) * max_elem;
            // cout<<arr[i]<<" ";
            min_idx++;
        }
    }
    // for(int i =0; i<n - 1; i++)
    //     cout<<arr[i]<<" ";
    // cout<<arr[n - 1];
    // cout<<"\n";
    // array elements back to it's original form
    for (int i = 0; i < n; i++)
        arr[i] = arr[i] / max_elem;
    for(int i =0; i<n - 1; i++)
        cout<<arr[i]<<" ";
    cout<<arr[n - 1];
    cout<<"\n";
	}
	return 0;
}
