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
// #define gcd(a, b) __gcd(num1 , num2)

int gcd(int a, int b){
	while(a!=b) {
		if(a>b)
			a -= b;
		else
			b -= a;
	}
	return a;
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
    	int m[11] = {2,3,5,7,11,13,17,19,23,29,31};
        int n;
        cin>>n;
        int v[n];
        int dp[n];
        F0R(i,n)
        	cin>>v[i];
        int ans[n];
        for(int i=0; i<n; i++)
            ans[i] = 0;
        int color = 1;
        for(int i=0; i<11; i++){
            bool got = 0;
            for(int j=0; j<n; j++) {

                if(ans[j])
                    continue;
                if(v[j]%m[i])
                    continue;
                got = 1;
                ans[j] = color;
            }
            if(got)
                color++;
        }
        cout << (color - 1) <<"\n";
        for(int i=0; i<n; i++)
            cout << ans[i] <<" ";

        cout<<endl;
        }
    return 0;
}