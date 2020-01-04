// https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array/0
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define MOD 1000000007

int SearchRotated(vector<int> &arr, int n, int start, int end, int key)
{
    if(start > end)
        return -1;
    int mid = (end-start)/2 + start;
    if(arr[mid] == key)
        return mid;
    if(arr[mid] >= arr[start])
    {
        if(arr[start] <= key && key <= arr[mid])
           return SearchRotated(arr, n, start, mid-1, key);
        else
           return SearchRotated(arr, n, mid+1, end, key);
    }
    else
    {
        if(arr[mid] <=key && key <= arr[end])
           return SearchRotated(arr, n, mid+1, end, key);
        else
           return SearchRotated(arr, n, start, mid -1, key);
    }
}

int main()
 {
	int t; cin>>t; 
	while(t--)
	{
	    int n; cin>>n;
        vector<int> arr(n);
        for(int index=0; index < n; index++)
            cin >> arr[index];
        int key; cin >> key;
        cout << SearchRotated(arr, n, 0, n-1, key) << endl;
	}
	return 0;
}
