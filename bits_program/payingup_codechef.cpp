//https://www.codechef.com/problems/MARCHA1
// Created by Manmeet Singh Parmar
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;

using namespace std;
void generator(vl &arr, int m)
{
	ll n = arr.size();
	ll ref = 0;
	
	for(ll i =0; i < (1<<n); i++)
	{
		ll temp = 0;
		for(ll j =0; j <n; j++)
		{
			if(i & (1<<j))
				temp +=arr[j];
		}
		if(temp == m)
		{
			cout <<"Yes";
			ref = 1;
			break;
		}
	}
	if(ref == 0)
		cout << "No";
}
int main()
{
  	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    int t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        vl v(n);
        for(ll i =0; i<n; i++)
        	cin>>v[i];
        generator(v, m);
        cout<<endl;
        }
    return 0;
}
