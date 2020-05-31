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
    while(t--){
    	int n; cin >> n;
    	vi A(n);
    	FOR(i,n) cin >> A[i];
    	vi B(n);
    	FOR(i,n) cin >> B[i];
    	int c = 0, A_s = 0, B_s = 0;
    	for(int i=0; i<n; ++i) {
    		A_s += A[i];
    		B_s += B[i];
    		if(A_s == B_s && A[i]==B[i])
    			c += B[i];
    	}
    	cout << c << '\n';
    }
    return 0;
}