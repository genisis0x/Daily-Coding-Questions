#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define MOD 1000000007
int main()
 {
	int t; cin>>t; 
	while(t--)
	{
	    int n,m,sum; cin >> n >> m >> sum;
	    vector<int> arr1(n);
	    vector<int> arr2(m);
	    for(int i=0; i<n; ++i)
	        cin >> arr1[i];
	    for(int i=0; i<m; ++i)
	        cin >> arr2[i];
	    sort(arr1.begin(), arr1.end());
	    sort(arr2.begin(), arr2.end());
	    int i = 0;
	    int j = m-1;
	    int count = 0;
	    while(i < n && j >= 0)
	    {
	        if(arr1[i] + arr2[j] == sum)
	        {
	            if(count > 0)
	                cout << ", ";
	            cout << arr1[i] << " " << arr2[j];
	            count++;
	            i++;
	            j--;
	        }
	        else if(arr1[i] + arr2[j] > sum)
	            j--;
	        else
	            i++;
	    }
	    if(count==0)
	        cout << -1;
	    cout << endl;
	}
	return 0;
}
