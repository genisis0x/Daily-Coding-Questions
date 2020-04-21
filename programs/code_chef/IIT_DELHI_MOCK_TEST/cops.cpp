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

    int t;
    cin>>t;
    while(t--){
    	int m,x,y;
    	cin >> m >> x >> y;
    	int arr[m];
    	FOR(i,m)
    		cin >> arr[i];
    	sort(arr, arr+m);
    	int sum = 0;
    	int diff = arr[0] - x*y - 1;
    	sum += (diff>0) ? diff : 0;
    	diff = 100 - arr[m-1] - x*y;
    	sum += (diff>0) ? diff : 0;
    	for(int i=1; i < m; i++) {
    		diff = (arr[i]-arr[i-1] - 2*x*y-1);
    		sum += (diff>0) ? diff : 0; 
    	}
    	cout << sum << '\n';
    }
    return 0;
}