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

bool is_greater(string a)
{
	int n = sz(a);
	for(int i=0; i<n; i++)
	{
		if(a[i]=='1')
			return true;
	}
	return false;
}

string xor_string(string a, string b)
{
	int n = sz(a);
	string res = "";
	for(int i=0; i<n; i++)
	{
		res += (a[i]-'0')^(b[i]-'0') + '0';
	}
	return res;
}

string add_string(string a, string b)
{
	int n = sz(a);
	string res = "";
	for(int i=n-1; i>=0; i--)
	{
		if(a[i]=='1' && b[i]=='1')
			res += '1';
		else
			res += '0';
	}
	// if(carry=='1')
	// 	res += '1';
	reverse(res.begin(), res.end());
	return res;
}


string left_shift(string a)
{
	if(a[0]=='0')
		a.erase(a.begin());
	a += '0';
	return a;
}


int finder(string a)
{
	int n = a.size();
	int res = 0;
	for(int i=0; i<n; i++)
	{
		if(a[i]=='1')
			res = i;
	}
	return res+1;
}

void addition(string a, string b)
{
	ll c =0;
	if(is_greater(b))
	{
		int n=a.size();
		int m=b.size();
		string res = "";
		if(m>n)
		{
			int v = m-n;
			for(int i=0; i<v; i++)
				res += '0';
			res.append(a);
			a = res;
		}
		else if(n>m)
		{
			int v = n-m;
			for(int i=0; i<v; i++)
			res += '0';
			res.append(b);
			b = res;
		}
		// cout<<a<<"----"<<b<<"\n";
		string u = xor_string(a,b);
		string v = add_string(a,b);
		if(!is_greater(v))
		{
			cout<<1<<"\n";
			return;
		}
		c = finder(v);
		// a = u;
		// b = left_shift(v);
		// c++;
	}
	// cout<<xor_string(a,b)<<"\n";
	// cout<<add_string(a,b)<<"\n";
	// cout<<"--------------\n";
	cout<<c<<"\n";
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
    while(t--){
    	string a,b;
    	cin>>a>>b;
        addition(a, b);
        }
    return 0;
}