// PASSED
// https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages/0/?track=SPCF-Searching&batchId=154
#include<iostream>
using namespace std;
long long int binary(int arr[],int n,int m,int min,long long int max){

    if(m>n) return -1;
    if(min<max)
    {
        int flag=0;
        long long int val = (max - min)/2 + min;
        int count=1;
        int sum=0;
        for(int i=0;i<n;i++){
            if(sum+arr[i]<=val)
            {
                sum+=arr[i];
            }
            else if(arr[i]<=val && count <m)
            {
                count++;
                sum = arr[i];
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
            return binary(arr,n,m,val+1,max);
        else if(flag==0)
            return binary(arr,n,m,min,val);
    }
    else
        return min;

    //return -1;
}

int main()
 {
	//code
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int arr[n];int min=-1;
	    long long int max=0;

	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(min==-1||min>arr[i])min=arr[i];
	        max+=arr[i];
	   }
	    int m; cin>>m;

	   //cout<<min<<" "<<max<<endl;
	  // mid = (min+max)/2;
	   long long int page = binary(arr,n,m,min,max);
	   cout<<page<<endl;
	}
	return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;



// bool is_valid(vector <ll> &v, int n, int m, ll ans)
// {
//     int students = 1;
//     ll current_pages = 0;
//     for(int i=0; i<n; i++)
//     {
//         if(current_pages + v[i] > ans)
//         {
//             current_pages = v[i];
//             students++;
//             if(students > m)
//                 return false;
//         }
//         else
//             current_pages += v[i];
//     }
//     return true;
// }

// void util(vector <ll> &v, int n, int m)
// {

//     ll total_pages = 0;
//     ll l = 0;
//     for(int i=0; i<n; i++)
//     {
//         total_pages += v[i];
//         l = max(l, v[i]);
//     }
//     ll r = total_pages;
//     ll final_ans = 0;
//     while(l <= r)
//     {
//         ll mid = (r -l)/2 + l;
//         if(is_valid(v, n, m, mid))
//         {
//             final_ans = mid;
//             r = mid - 1;
//         }
//         else
//             l = mid +1;
//     }
//     if(final_ans == 0){
//         cout<<-1<<"\n";
//         return ;}
//     cout<<final_ans<<"\n";
// }

// int main()
//  {
// 	int t; cin>>t;
// 	while(t--)
// 	{
// 	    int n; cin>>n; vector <ll> v(n);
// 	    for(int i=0; i<n; i++)
// 	        cin>>v[i];
// 	    int m; cin>>m;
// 	    if(n < m)
//         {
//             cout<<-1<<"\n";
//             return 1;
//         }
// 	    util(v, n, m);
// 	}
// 	return 0;
// }
