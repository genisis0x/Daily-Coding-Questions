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




int is_prime(ll n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(!(n % i))
			return 0;
	}
	return 1;
}

int main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ll n;
    cin >> n;
    int l_factor = 1;
    while(!(n & 1))
    {
    	l_factor = 2;
    	n /= 2;
    }
    for(ll i = 3; i <= sqrt(n); i+=2)
    {
    	if(!(n % i))
    	{
    		if(is_prime(i))
    			l_factor = (l_factor > i) ? l_factor : i;
    	}
    }
    cout<<l_factor<<endl;
    return 0;
}