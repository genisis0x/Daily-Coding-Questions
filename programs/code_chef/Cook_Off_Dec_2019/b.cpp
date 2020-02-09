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
void helper(string s)
{
    int n = s.length();
    int max_v = 0;
    int l_arr[n+1];
    l_arr[0] = 0;
    for(int i=1; i<=n; i++)
    {
        l_arr[i] = l_arr[i-1] + s[i-1] -'0';
    }
    int o_arr[n+1];
    o_arr[0] = 0;
    for(int i=1; i<=n; i++)
    {
        o_arr[i] = i - l_arr[i];
    }
    for(int l=0; l<n; l++)
    {
        for(int r=l+1; r<=n; r++)
        {
            int a = o_arr[l] + l_arr[r] - l_arr[l] + o_arr[n] - o_arr[r];
            int b = l_arr[l] + o_arr[r] - o_arr[l] + l_arr[n] - l_arr[r];
            max_v = max(max_v,max(a,b));
        }
    }
    cout<<n-max_v;
}
int main()
{
 //   	#ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

 //    ios_base::sync_with_stdio(false);
 //    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s; cin>>s;
        helper(s);
        cout<<endl;
        }
    return 0;
}