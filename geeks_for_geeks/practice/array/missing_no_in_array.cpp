//PASSED
// https://practice.geeksforgeeks.org/problems/missing-number-in-array/0/?ref=self

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
 {
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n; vector <int> v(n -1);
        ll sum = (n * (n + 1) / 2);
        for(int i=0; i< n -1; i++)
            cin>>v[i];
        ll t_sum = 0;
        for(int i=0; i< n -1; i++)
            t_sum += v[i];
        cout<<sum-t_sum<<"\n";
    }
	return 0;
}
