//PASSED
// https://practice.geeksforgeeks.org/problems/find-first-and-last-occurrence-of-x/0/?track=sp-arrays-and-searching&batchId=152
#include <bits/stdc++.h>
using namespace std;
int first_binarysearch(int arr[],int l,int r,int x, int n)
{
	if( l <= r)
	{
		int mid = l +(r-l)/2;
		if((mid == 0 && x == arr[mid]) || (arr[mid] == x && x > arr[mid - 1]))
        {
			return mid;
        }
		else if(arr[mid] < x)
			return first_binarysearch(arr,mid+1,r,x, n);
		else
			return first_binarysearch(arr,l,mid -1,x, n);	
	}
	else
        return -1;
}

int last_binarysearch(int arr[],int l,int r,int x, int n)
{
    if( l <= r)
    {
        int mid = l +(r-l)/2;
        if((mid == n -1 && x == arr[mid]) || (arr[mid] == x && x < arr[mid + 1]))
        {
            return mid;
        }
        else if(arr[mid] > x)
            return last_binarysearch(arr,l,mid-1,x, n);
        else
            return last_binarysearch(arr,mid +1,r,x, n); 
    }
    else
        return -1;
}


int main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
        int *arr = new int[n];
    	for (int i = 0; i < n; i++)
    	{
    		cin>>arr[i];
    	}
        int x;
        cin>>x;
        cout<<first_binarysearch(arr, 0, n-1, x, n)<<" ";
        if(first_binarysearch(arr, 0, n-1, x, n) == -1){
            cout<<endl;
            continue;
        }
        cout<<last_binarysearch(arr, 0, n-1, x, n);
        cout<<endl;
        }
    return 0;
    }
