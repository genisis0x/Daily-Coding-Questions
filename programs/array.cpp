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

#define FOR(i, x, n) for(ll i=x; i<(n); i++)
#define F0R(i, n)  for(ll i=0; i<(n); i++)
#define FORd(i, x, n) for(ll i = (n)-1; i >= x; i--)
#define F0Rd(i,n) for(ll i = (n)-1; i >= 0; i--)
#define FOR_B_l(i,n) for(ll i = 0; i < (1 << n); i++)
#define FOR_B_r(i,n) for(ll i = 0; i < (1 >> n); i++)


#define l_rot_n(a, n) (a << n)
#define r_rot_n(a, n) (a >> n)

#define mod 1000000007
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define sz(x) (int)(x).size()
using namespace std;


int main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n;
	cin>>n;
	int v[n];// input array
	F0R(i, n)
		cin>> v[i];
	// int *arr = (int *)malloc(sizeof(int) * n);
	// int arr[n]; // ref arr;
	F0R(i, n)
	{
		if(v[i] != i && v[i] >= 0)
			swap(v[i], v[v[i]]);
	}
	F0R(i, n)
		cout<<v[i]<< " ";
	cout<<endl;
    return 0;
}


	// F0R(i, n)
	// {
	// 	 if(v[i] != -1)
	// 	 	arr[v[i]] = v[i];
	// }
	// F0R(i, n)
	// {
	// 	if(arr[i] != i)
	// 		arr[i] = -1;
	// }
