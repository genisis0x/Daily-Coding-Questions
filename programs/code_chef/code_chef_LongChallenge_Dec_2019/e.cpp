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


ll fac[200000];
ll count_one(string a)
{
    ll n = sz(a);
    ll res = 0LL;
    for(int i=0; i<n; i++)
    {
        if(a[i]=='1')
          res += 1LL;
    }
    return res%mod;
}

void fact()
{
    fac[0]=1;
    fac[1]=1;
    for(ll i=2; i<=200000; i++)
    {
        fac[i] = (fac[i-1]*i)%mod;
    }
}

ll modPow(ll a, ll x, ll p) {
    //calculates a^x mod p in logarithmic time.
    ll res = 1;
    while(x > 0) {
        if( x % 2 != 0) {
            res = (res * a) % p;
        }
        a = (a * a) % p;
        x /= 2;
    }
    return res;
}

ll modInverse(ll a, ll p) {
    //calculates the modular multiplicative of a mod m.
    //(assuming p is prime).
    return modPow(a, p-2, p);
}

ll binary_xor(string a, string b,int n)
{
    ll a1 = count_one(a);
    ll b1 = count_one(b);
    vl v;
    ll sum =0;
    if(a1==b1 && a1==0)
        return 1LL;
    else
    {
        ll j = a1+b1-2*min(a1,b1);
        // cout<<j<<" ";
        ll n1 = fac[n];
        ll d1 = fac[n-j];
        ll d2 = fac[j];
        ll d = ((d1%mod)*(d2%mod))%mod;
        ll ans = (n1* modInverse(d,mod))%mod;
        sum += ans;
        // cout<<n1<<" "<<d1<<" "<<d2<<" ";
        ll zero = n - max(a1, b1);
        ll i =1;
        while(i<=zero && (j+2*i)<=(a1+b1))
        {
            // cout<<j+2*i<<" ";
            ll r = j+2*i;
            d1 = fac[n-r];
            d2 = fac[r];
            d = ((d1%mod)*(d2%mod))%mod;
            ans = (n1* modInverse(d,mod))%mod;
            sum = ((sum%mod)+(ans%mod))%mod;
            i++;
        }
    }
    return sum%mod;
}
int main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

 //    ios_base::sync_with_stdio(false);
 //    cin.tie(NULL);

    int t;
    cin>>t;
    fact();
    while(t--){
      	int n; cin>>n;
        string a,b; cin>>a>>b;
        cout<<binary_xor(a,b,n)<<endl;
        }
    return 0;
}