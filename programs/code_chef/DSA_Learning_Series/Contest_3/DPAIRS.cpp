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
#define gcd(a, b) __gcd(num1 , num2)

int32_t main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n,m;
    cin>>n>>m;
    vector<pair<int, int> > A(n);
    vector<pair<int ,int> > B(m);
    for(int i = 0 ; i < n; ++i) {
    	cin >> A[i].first;
    	A[i].second = i;
    }
    for(int i = 0 ; i < m; ++i) {
    	cin >> B[i].first;
    	B[i].second = i;
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    for(int i = 0; i < n; ++i) {
    	cout << A[i].second << ' ' << B[0].second << '\n'; 
    }
    for(int i = 1; i < m; ++i) {
    	cout << A[n-1].second << ' ' << B[i].second << '\n'; 
    }
   return 0;
}