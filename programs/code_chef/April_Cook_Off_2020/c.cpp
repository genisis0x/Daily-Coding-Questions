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
    while(t--) {
    	string s,r; cin >> s >> r;
		int n = s.length();
		bool check = 0;
		int count_equal = 0;
		int k_max = 0;
		int l_min = 0;
		vi equal_values;
		for(int i=0; i<n; i++) {
			if(s[i]==r[i]) {
				if(check)
					count_equal++;
			}
			else {
				if(!check) {
					k_max++;
					check = 1;
				}
				l_min++;
				if(count_equal > 0) {
					equal_values.PB(count_equal);
					count_equal = 0;
					k_max++;
				}
			}
		}
		sort(equal_values.begin(), equal_values.end());
		int ans = k_max*l_min;
		for(int equ_val : equal_values) {
			l_min += equ_val;
			k_max -= 1;
			ans = min(ans, k_max*l_min);
		}
		cout << ans << '\n';
	}		
    return 0;
}