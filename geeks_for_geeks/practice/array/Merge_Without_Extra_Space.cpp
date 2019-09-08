// PASSED
// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays/0/
#include <bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	 // 	#ifndef ONLINE_JUDGE
		// freopen("input.txt", "r", stdin);
		// freopen("output.txt", "w", stdout);
		// #endif

	 //    ios_base::sync_with_stdio(false);
  //   	cin.tie(NULL);

	    int x, y;
	    cin>>x>>y;
	    vector <long long> arr1(x);
	    vector <long long> arr2(y);
	    for(int i =0; i<x; i++)
	        cin>>arr1[i];
	     for(int i =0; i<y; i++)
	        cin>>arr2[i];
	   	int i = x-1; int j =y-1;
	   	while(i >= 0 && j>=0)
	    {
	    	if(arr1[i]>arr2[j])
	        {
	            swap(arr1[i],arr2[j]);
	            i--;
	        }
	        else
	        	j--;
	    }
	    i = 0;
	    while(i > y)
	    {
	    	if(arr1[x -1] > arr[i]){
	    		swap(arr1[x -1],arr[i])
	    		break;
	    	}
	    }
	    sort(arr1.begin(), arr1.end());
	    sort(arr2.begin(), arr2.end());
	    for(i=0;i<x;i++)
	        cout<<arr1[i]<<" ";
	    for(i=0;i<y;i++)
	        cout<<arr2[i]<<" ";
	    cout<<endl;
	}
	return 0;
}


// M 2


/*
#include <bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int x, y;
	    cin>>x>>y;
	    vector <long long> arr1(x);
	    vector <long long> arr2(y);
	    for(int i =0; i<x; i++)
	        cin>>arr1[i];
	     for(int i =0; i<y; i++)
	        cin>>arr2[i];
	   int i = 0; int j =0;
	   while(i<x && j<y)
	    {
	        if(arr1[i]>arr2[j])
	        {
	            swap(arr1[i],arr2[j]);
	        }
	        i++;
	        j++;
	        if(i==x and j!=y)
	        {
	            i=0;
	        }
	        if(i!=x && j==y)
	        {
	            j=0;
	        }
	    }
	    sort(arr1.begin(), arr1.end());
	    sort(arr2.begin(), arr2.end());
	    for(i=0;i<x;i++)
	        cout<<arr1[i]<<" ";
	    for(i=0;i<y;i++)
	        cout<<arr2[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
*/
