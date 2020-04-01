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
#define gcd(a, b) __gcd(num1 , num2)

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
    while(t--) {
    int a,b,c,d; cin>>a>>b>>c>>d;
    int x,y,x1,y1,x2,y2; cin>>x>>y>>x1>>y1>>x2>>y2;

    if(x-x1 < a-b || x2 -x < b -a) {
        cout << "No\n";
        continue;       
    }
    if(y-y1 < c-d || y2-y < d -c) {
        cout << "No\n";
        continue;
    }
    if(x1==x2 && (a+b)>0){
        cout << "No\n";
        continue;
    }
    if(y1==y2 && (c+d) > 0){
        cout << "No\n";
        continue;
    }
    cout<< "Yes\n";
    }







    // while(t--){
    //     ll a,b,c,d;
    //     cin >> a >> b >> c >> d;
    //     ll x,y,x1,y1,x2,y2;
    //     cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    //     ll x1rang,y1rang,x2rang,y2rang;
    //     if(x < x1 || x > x2 || y < y1 || y > y2)
    //     {
    //     	cout << "No\n";
    //     	continue;
    //     }
    //     if(a > b) {
    //     	x1rang = a - b;
    //     	if(x1rang > abs(x1 - x)) {
    //     		cout << "No\n";
    //     		continue; 
    //     	}
    //     }
    //     if(a < b) {
    //     	x2rang = (b-a);
    //     	if(x2rang > abs(x2 - x)) {
    //     		cout << "No\n";
    //     		continue;
    //     	}
    //     }
    //     if (a==b) {
    //     	x1rang = (a!=0) ? 1 : a;
    //     	x2rang = (b!=0) ? 1 : b;
    //     	if(x1rang > abs(x1 -x) || x2rang > abs(x2-x)) 
    //     	{
    //     		cout << "No\n";
    //     		continue;
    //     	}
    //     }
    //     if(c > d) {
    //     	y2rang = c - d;
    //     	if(y2rang > abs(y1 - y)) {
    //     		cout << "No\n";
    //     		continue;
    //     	}
    //     }
    //     if(c < d) {
    //     	y1rang = (d-c);
    //     	if(y1rang > abs(y2 - y)) {
    //     		cout << "No\n";
    //     		continue;
    //     	}
    //     }
    //     if (c==d) {
    //     	y1rang = (c!=0) ? 1 : 0;
    //     	y2rang = (d!=0) ? 1 : 0;
    //     	if(y1rang > abs(y1 -y) || y2rang > abs(y2-y)) 
    //     	{
    //     		cout << "No\n";
    //     		continue;
    //     	}
    //     }
    //     cout << "Yes\n";
    //     }
    return 0;
}