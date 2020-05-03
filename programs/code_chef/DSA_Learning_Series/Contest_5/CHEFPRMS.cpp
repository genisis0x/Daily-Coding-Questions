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
#define mod 1000000007
#define pi 2acos(0.0)
#define MP make_pair
#define PB push_back
#define EB emplace_back // its's faster than push_back
#define F first
#define S second
#define sz(x) (int)(x).size()
#define what_is(x) cerr << #x << "is" << x << endl;
int gcd(int a,int b) { while(a!=b) {if(a>b) a -=b; else b -=a;}
	return a;
}


int prime(int n) {
	if(n<2) return 0;
	for(int i=2; i*i<=n; ++i) {
		if(n%i==0)
			return 0;
	}
	return 1;
}

int semi_prime[201];
int isprime[201];

void solve() {
	for(int i=0; i<201; ++i) {
	semi_prime[i] = 0;
	isprime[i]=prime(i);
}
	for(int i=2; i<=200; ++i) {
		for(int j=2; j <=200; ++j) {
			if(isprime[i]&&isprime[j] && i*j<=200 && i!=j)
				semi_prime[i*j]=1;
		}
	}
}

int32_t main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    solve();
    while(t--){
    	int n; cin >> n;
    	bool ok = 0;
    	for(int i=2; i<n; i++) {
    		if(semi_prime[i] && semi_prime[n-i]) {
    			ok = 1; break;
    		}
    	}
    	if(ok)
    		cout << "YES\n";
    	else
    		cout << "NO\n";
    }
    return 0;
}