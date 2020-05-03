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



// n = a^2 - b^2
// n = (a+b)(a-b);
// (a-b) = i;
// (a+b) = n/i;
// 2a = i + n/i
int sqroot(int n) {
	int res = LONG_MAX;
	for(int i=1; i<=sqrt(n); ++i) {
		if(n%i==0 && i!=(n/i)) {
			int a = (i+(n/i))/2;
			int b = ((n/i)-i)/2;
			if(a*a == n + b*b) {
				res = min(res, b);
			}
		}
	}
	if(res==LONG_MAX)
		return -1;
	return res*res;
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
    	cout << sqroot(n) << '\n';
    }
    return 0;
}