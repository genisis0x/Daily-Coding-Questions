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

ll setBits(ll a)
{
	ll count =0;
	while(a)
	{
		a &= (a-1LL);
		count++;
	}
	return count;
}



int main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    map<ll, ll> reff;
    while(t--) {
        ll n;
        cin>>n;
        ll query; cin >> query;
        ll odd=0; ll even = 0;
        ll a;
        for(ll i=0; i<n; i++)
        {
        	cin >> a;
        	if(reff[a])
        	{
        		if(reff[a]&1LL)
        			odd++;
        		else
        			even++;
        	}
        	else
        	{
        		reff[a] = setBits(a);
        		if(reff[a]&1LL)
        			odd++;
        		else
        			even++;
        	}
       	}
        while(query--)
        {
        	cin >> a;
        	if(reff[a])
        	{
        		if(reff[a]&1LL)
        			cout << odd << " " << even << endl;
        		else
        			cout << even << " " << odd << endl;
        	}
        	else
        		{
        			reff[a] = setBits(a);
        			if(reff[a]&1LL)
        				cout << odd << " " << even << endl;
        			else
        				cout << even << " " << odd << endl;
        		}
        }
    }
    return 0;
}	