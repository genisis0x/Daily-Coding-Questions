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
    	int n,s;
        cin>>n>>s;
        vi d;
        vi f;
        vi val(n);
        int a;
        FOR(i,n) cin >> val[i];
        FOR(i,n) {
        	cin >> a;
        	if(a==1) {
        		f.push_back(val[i]);
        	}
        	else
        		d.push_back(val[i]);
        }
        s = 100 - s;
        string ans = "no";
        sort(f.begin(), f.end());
        sort(d.begin(), d.end());
        int N = f.size();
        int M = d.size();
        int j=M-1;
        while(j>=0) {
        	if(ans=="yes")
        		break;
        	int i = N-1;
        while(i >=0) {
        	if(f[i] + d[j] <= s) {
        		ans = "yes";
        		break;
        	}
        	else {
        		i--;
        	}
    	}
    	j--;
    }
    cout << ans << '\n';
}
    return 0;
}
