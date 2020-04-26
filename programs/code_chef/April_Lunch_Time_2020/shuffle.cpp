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


void solve(vi &arr, int n, int k) {
	// sort(arr.begin(), arr.end());
	// if(k==1) {
	// 	for(int i=0; i<n; i++)
	// }
	vector<vector<int> > v(k);
	for(int i=0; i<k; i++) {
	for(int j=i; j<n; j+=k){
		v[i].push_back(arr[j]);
	}
	}
	for(int i=0; i<k; i++) {
		sort(v[i].begin(), v[i].end());
	}
	// for(auto i : v) {
	// 	for(auto j : i)
	// 		cout << j << ' ';
	// 	cout << '\n';
	// }
	vi ans(n);
	int l=0;
	for(int i=0; i<v.size(); i++) {
		int l = i;
		for(int j=0; j < v[i].size(); j++) {
			ans[l] = v[i][j];
			l += k;
		}
	}
	string str = "yes";
	for(int i=0; i<n-1; i++) {
		if(ans[i] > ans[i+1])
		{
			str = "no";
			break;
		}
	}
	cout << str << '\n';

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
    	int n,k;
        cin>>n>>k;
        vi v(n);
        for(int i=0; i<n; i++) 
        	cin >> v[i];
        solve(v, n,k);
    }
    return 0;
}
