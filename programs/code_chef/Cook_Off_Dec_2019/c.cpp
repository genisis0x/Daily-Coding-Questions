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
#define FOR_B_l(i,n) for(ll i = 0; i < (1LL << n); i++)
#define FOR_B_r(i,n) for(ll i = 0; i < (1LL >> n); i++) // typecasting of 1 in long long


#define l_rot_n(a, n) (aLL << n) // type casting of a in long long and lef rotation of a with n;

#define r_rot_n(a, n) (aLL >> n)

#define mod 1000000007
#define pi 2acos(0.0)
#define MP make_pair
#define PB push_back
#define EB emplace_back // its's faster than push_back
#define F first
#define S second
#define sz(x) (int)(x).size()
#define what_is(x) cerr << #x << "is" << x << endl;
#define gcd(a, b) __gcd(num1 , num2)



void helper(int l, int r)
{
	ll xor_v = 0;
	for(int i=l; i<r; i++)
	{
		ll xor_v_1 = (i^(i+1));
        cout<<xor_v_1<<endl;;
        xor_v += xor_v_1;
	}
	// cout<<xor_v<<endl;
}

bool sortbysec(const pair<int,string> &a, 
              const pair<int,string> &b) 
{ 
    if(a.first!=b.first)
        return a.first > b.first;
    return (a.second < b.second); 
} 



int main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x; cin>>x;
    int n; cin>>n;
    vector<pair<int, string> > arr;
    int i =0;
    while(i<n)
    {
        string a; cin>>a;
        int b; cin>>b;
        if(b>=x)
            arr.push_back(make_pair(b,a));
        i++;
    }
    sort(arr.begin(), arr.end(), sortbysec);
    for(int it=0; it<arr.size(); it++)
        cout<<arr[it].second<<" "<<arr[it].first<<endl;
    return 0;
}