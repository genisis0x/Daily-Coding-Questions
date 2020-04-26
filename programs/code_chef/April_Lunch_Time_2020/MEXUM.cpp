// Created by Manmeet Singh Parmar
// name of snippet-> temp.sublime-snippet
// path -> sublime text 3/packages/user/temp.sublime-snippet

#include <bits/stdc++.h>
using namespace std;
#define int long long

typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;

#define FOR(i, n)  for(int i=0; i<(n); i++)
#define FORA(i, a, n) for(int i = a; i <= (n); ++i)
#define FORD(i, a, n) for(int i = a; i >= (n); --i);
#define mod 998244353
#define pi 2acos(0.0)
#define MP make_pair
#define PB push_back
#define EB emplace_back // its's faster than push_back
#define F first
#define S second
#define sz(x) (int)(x).size()
#define what_is(x) cerr << #x << "is" << x << endl;
#define gcd(a, b) __gcd(num1 , num2)

int power(int a, int b)	//a is base, b is exponent
{
	if(b==0)
		return 1;
	if(b==1)
		return a;
	if(b%2 == 1)
		return (power(a,b-1)*a)%mod;
	int q = power(a,b/2);
	return (q*q)%mod;
}

int32_t main()
{
/*
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
*/
    int t;
    cin>>t;
    while(t--){
    	int n;
        cin>>n;
        vi v(n);
        int a;
        int hm[n+3];
        memset(hm,0,sizeof(hm));
        FOR(i,n) {
        	cin >> a;
        	if(a>=n+2){
        		v.PB(n+2);
        		hm[n+2]++;
        	}
        	else {
        		v.PB(a);
        		hm[a]++;
        	}
        }
        // calulate power of 2;
        int powerTwo[n+3];
        powerTwo[0]=1;
        for(int i=1; i<=n+2; i++) {
        	powerTwo[i] = (2*powerTwo[i-1])%mod;
        }

        // calculate prefix multiply
        int prefix_mul[n+3];
        prefix_mul[0] = 1;
        prefix_mul[1] = (powerTwo[hm[1]]-1)%mod;
        for(int i=2; i<=n+2; i++) {
        	prefix_mul[i] = ((powerTwo[hm[i]] - 1)*prefix_mul[i-1])%mod;
        }

        // calculate suffix_sum
        int suffix_sum[n+3];
        suffix_sum[n+2] = 0;
        for(int i=n+1; i>=1; i--) {
        	suffix_sum[i] = (hm[i+1] + suffix_sum[i+1])%mod;
        }
        suffix_sum[0] = 0;
        
        int t = 0;
        // int ans = (2^a-1)*(2^b-1)*(2^c-1)....((2^hm[mex-1])-1) => prefix Multiply.
        // ans *= (2^(hm[mex+1]))*(2*(hm[mex+2]))....(2*(hm[n+1])) == 2^(hm[mex+1]+hm[mex+2]....hm[n+1]).
        // hm[mex+1]+hm[mex+2]+hm[mex+3]+hm[mex+4]......+hm[n+1] => suffix Sum.
        for(int mex=1; mex<=n+1; mex++) {
        	int sum = (((prefix_mul[mex-1])%mod)*mex)%mod;
        	sum = (sum * powerTwo[suffix_sum[mex]])%mod;
        	t = (sum + t)%mod;
        }
        cout << t << '\n';
    }
    return 0;
}
