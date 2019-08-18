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


void util(vi &c, vi &p, int n, int m, int k, int l, int r)
{
	// l & r // range
	// n no of cane
	// m min to reach home
	// ci ->current temp
	// k ambient temp
	int min_p = INT_MAX;
	for(int i =0; i <n; i++)
	{
		int c_t = c[i]; // 1
		int c_p = p[i];
		for(int j = 0; j < m; j++)
		{
			if(c_t > k + 1)
				c_t -=1;
			else if(c_t < k -1)
				c_t +=1;
			else if((c_t >= k-1) && (c_t <= k+1))
				c_t = k;
		}
		if((c_t >= l) && (c_t <= r))
		{
			min_p = (min_p < c_p) ? min_p : c_p;
		}
	}
	if(min_p == INT_MAX)
		cout<<-1;
	else
		cout<<min_p;
	cout<<endl;
}

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
        int n, m, k, l, r;
        cin>>n>>m>>k>>l>>r;
        vi c(n); // current temp
        vi p(n); // price
        F0R(i,n)
        	cin>>c[i]>>p[i];
        util(c, p, n, m, k, l, r);

        }
    return 0;
}