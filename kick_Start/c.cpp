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


bool check(string f, string s, vi &v)
{
	vi temp(9, 0);
	if(sz(f) != sz(s))
		return false;
	for(ll i=0; i<sz(f); i++)
	{
		temp[f[i]] += 1;
		temp[s[i]] += 1;
	}
	for(int i=0; i<9; i++)
	{
		if(temp[i] != v[i])
			return false;
	}
	return true;
}

void util(vi &v)
{
	
	string res = "";
	for(int i=0; i<9; i++)
	{
		if(v[i] > 0)
		{
			int j = v[i];
			while(j--)
				res += (i+1) + '0';
		}
	}
	// vi ::iterator ;i
	ll n = sz(res);
	// sort(res.begin(), res.end());
	ll sum1 = res[n - 1]-'0';
	ll sum2 = res[n-2]-'0';
	for(int i=n-3; i>=0; i--)
	{
		if(sum1>sum2)
			sum2 +=res[i]-'0';
		else
			sum1 += res[i]-'0';
	}
	cout<<res<<"\n";
	// cout<<sum1<<"\n";
	// cout<<sum2<<"\n";
	if(((sum1-sum2)%11)==0)
		cout<<"YES";
	else
	{
		// string start = res;
	 // 	reverse(res.begin(), res.end());
		// string end = res;
		// ll start_l = stoll(start, nullptr, 10);
		// ll end_l = stoll(end, nullptr, 10);
		// cout<<start_l<<" "<<end_l<<"\n";
		// for(ll i=end_l; i>=start_l; i--)
		// {
		// 	// cout<<i<<"\n";
		// 	// ll temp = stoll(i, nullptr, 10);
		// 	if(i%11==0)
		// 	{
		// 		string k = to_string(i);
		// 		cout<<k<<"\n";
		// 		if(check(start,k,v))
		// 		{
		// 			cout<<"YES";
		// 			return;
		// 		}
		// 	}
		// }
		cout<<"NO";
	}
}
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
    int i=1;
    while(i<=t){
        vi v(9);
        F0R(i,9)
        	cin>>v[i];
        cout<<"Case #"<<i<<": ";
        util(v);
        cout<<endl;
        i++;
        }
    return 0;
}