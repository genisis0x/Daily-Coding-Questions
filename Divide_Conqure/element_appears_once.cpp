#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define MOD 1000000007

// https://practice.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array/0


void search(int *arr, int low, int high) 
{ 
     // Base cases 
    if (low > high) 
       return; 
  
    if (low==high) 
    { 
        printf("%d",arr[low]); 
        return; 
    } 
  
    // Find the middle point 
    int mid = (low + high) / 2; 
  
    // If mid is even and element next to mid is 
    // same as mid, then output element lies on 
    // right side, else on left side 
    if (mid%2 == 0) 
    { 
        if (arr[mid] == arr[mid+1]) 
            search(arr, mid+2, high); 
        else
            search(arr, low, mid); 
    } 
    else  // If mid is odd 
    { 
        if (arr[mid] == arr[mid-1]) 
            search(arr, mid+1, high); 
        else
            search(arr, low, mid-1); 
    } 
} 

int main()
 {
	int t; cin>>t; 
	while(t--)
	{
	    int n; cin >> n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	        cin >> arr[i];
	    search(arr, 0, n-1);
	    cout << endl;
	}
	return 0;
}
