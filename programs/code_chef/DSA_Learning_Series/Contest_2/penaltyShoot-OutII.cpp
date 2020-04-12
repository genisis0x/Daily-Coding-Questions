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

int util(string s) {
    int n = sz(s);
    int a=0, b=0;
    int aremain=n/2, bremain=n/2;
    for(int i=0; i<n; i++) {
        if(i%2) {
            b += s[i] - '0';
            bremain--;
        }
        else if(i%2 == 0) {
            a += s[i] - '0';
            aremain--;
        }
        // cout << a << ' ' << b << ' ' << aremain << ' ' << bremain << '\n';
        if(a-b > bremain || b-a > aremain)
            return i+1;
    }
    return n;
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
    	int n;
        cin>>n;
        string s; cin >>s;
        cout << util(s) << '\n';
    }
    return 0;
}