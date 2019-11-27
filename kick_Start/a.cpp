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



int util2(vi &citations)
{
	int ssum = 0;
    int sz = citations.size();
    // for(int i=1; i<sz; i++)
    // 	cout<<citations[i]<<" ";
    // cout<<"\n";
    vector<int>mp(sz+1,0);
    for (int i=1;i<sz;++i){
            mp[min(sz,citations[i])] +=1;
        }
    // for(int i=0; i<=sz; i++)
    // 	cout<<mp[i]<<" ";
    // cout<<"\n";
    for (int i=sz;i>=0;--i){
            ssum += mp[i];
            if (ssum >= i)
            	return i;
        }
    return 0;
}
void util(vi &v, int n)
{
	vi t2;
	for(int i=1; i<=n; i++)
	{
		t2 = v;
		vi t;
		t2.resize(i+1);
		t=t2;
		cout<<util2(t)<<" ";
		// util2(t);
	}
}
int main()
{
 //   	#ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    int i=1;
    while(i <=t){
        int n;
        cin>>n;
        vi v(n+1);
        FOR(i, 1, n+1)
        	cin>>v[i];
        // sort(v.begin(), v.end(), );
        cout<<"Case #"<<i<<": ";
        util(v, n);
        cout<<endl;
        i++;
        }
    return 0;
}