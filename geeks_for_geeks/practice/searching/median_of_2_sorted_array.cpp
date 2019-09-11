// PASSED
// https://practice.geeksforgeeks.org/problems/median-of-two-sorted-arrays/0/?track=SPCF-Searching&batchId=154
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void util(int arr1[], int arr2[], int n, int m)
{
    //   for(int i=0; i<n; i++)
	   //     cout<<arr1[i]<<" ";
	   // for(int i=0; i<m; i++)
	   //     cout<<arr2[i]<<" ";
    int flag = 0;
    ll median = (n + m)/2 + 1;
    if(!((n+m) & 1))
    {
        flag = 1;
        median +=1;
    }
    // cout<<median<<"\n";
    vector <int> v;
    int i =0;
    int j = 0;
    int c = 0;
    while(c < median)
    {
        if(arr1[i] >= arr2[j] && j<m && i<n)
        {
            v.push_back(arr2[j]);
            c++;
            j++;
        }
        else if(arr1[i] < arr2[j] && j<m && i<n)
        {
            v.push_back(arr1[i]);
            c++;
            i++;
        }
        else
            break;
    }
    while(i<n && c < median)
    {
        v.push_back(arr1[i++]);
        c++;
    }
    while(j<m && c < median){
        v.push_back(arr2[j++]);
        c++;
    }
    int e = v.size() -1;
    // cout<<e<<"\n";
    // for(int i=0; i<e; i++)
    //     cout<<v[i]<<" ";
    long double res = 0;
    if(flag)
        res = (v[e -1] + v[e -2])/2;
    else
        res = v[e];
    cout<<floor(res)<<"\n";
}


int main()
 {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n; int m; cin>>m;
	    int arr1[n]; int arr2[m];
	    for(int i=0; i<n; i++)
	        cin>>arr1[i];
	    for(int i=0; i<m; i++)
	        cin>>arr2[i];
	   //for(int i=0; i<n; i++)
	   //     cout<<arr1[i]<<" ";
	   // for(int i=0; i<m; i++)
	   //     cout<<arr2[i]<<" ";
	    util(arr1, arr2, n, m);
	}
	return 0;
}





// M2
/*
void util(int arr1[], int arr2[], int n, int m)
{
    //   for(int i=0; i<n; i++)
	   //     cout<<arr1[i]<<" ";
	   // for(int i=0; i<m; i++)
	   //     cout<<arr2[i]<<" ";
    
    // cout<<median<<"\n";
    vector <int> v;
    int i =0;
    int j = 0;
    int c = 0;
    while(i<n && j<m)
    {
        if(arr1[i] >= arr2[j] && j<m && i<n)
        {
            v.push_back(arr2[j]);
            c++;
            j++;
        }
        else if(arr1[i] < arr2[j] && j<m && i<n)
        {
            v.push_back(arr1[i]);
            c++;
            i++;
        }
        else
            break;
    }
    while(i<n)
    {
        v.push_back(arr1[i++]);
    }
    while(j<m){
        v.push_back(arr2[j++]);
    }
    ll median = (n +m)/2;
    long double res = v[median];
    if(!((n+m) &1)){
        res = v[median - 1] + v[median];
        res /= 2;
    }
    cout<<floor(res)<<"\n";
}


int main()
 {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n; int m; cin>>m;
	    int arr1[n]; int arr2[m];
	    for(int i=0; i<n; i++)
	        cin>>arr1[i];
	    for(int i=0; i<m; i++)
	        cin>>arr2[i];
	   //for(int i=0; i<n; i++)
	   //     cout<<arr1[i]<<" ";
	   // for(int i=0; i<m; i++)
	   //     cout<<arr2[i]<<" ";
	    util(arr1, arr2, n, m);
	}
	return 0;
}
*/
