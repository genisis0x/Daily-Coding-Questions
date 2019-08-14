//https://www.geeksforgeeks.org/sort-even-numbers-ascending-order-sort-odd-numbers-descending-order/
#include <bits/stdc++.h>
using namespace std;
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
    	int A[n];
    	// int even[n];
    	// int odd[n];
    	// memset(even, 0, sizeof(even));
    	// memset(odd, 0, sizeof(odd));
    	// int p=0,q=0;
    	for (int i = 0; i < n; i++)
    		cin>>A[i];
    	for (int i = 0; i < n; i++)
    	{
    		if(A[i] & 1)
    			A[i] *= -1;
    	}
    	sort(A, A + n);
    	for(int i=0;i<n;i++)
        {
            if(A[i] & 1)
            	A[i] *= -1;
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
        
    return 0;
}

