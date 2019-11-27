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


void util(string s, int n, int k)
{
	string ref = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
	k %=26;
	string res ="";
	for(int i=0; i<n; i++)
	{
		if(s[i] >= 'A' && s[i] <= 'A' + k)
			res += ref[s[i]-'A' + 26 - k];
		else
			res += ref[s[i]-'A'- k];
	}
	int i=0;
	// cout<<res<<"\n";
	string res2 = "";
	while(i<n)
	{
		if(res[i]=='Q' && res[i+1]=='Q'){
			res2 += ' ';
			i +=2;
		}
		else{
			res2 += res[i];
			i++;
		}
	}
	// res2 += res[n-1];
	cout<<res2;
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
    	int k; cin>>k;
    	string s;
    	cin.ignore(1,'\n');
    	getline(cin,s);
    	s.erase(remove(begin(s),end(s),' '),end(s));
    	// getline(cin,s); 
        // cout<<k<<"\n";
        // cout<<c;
        // if(c=='\n')
        // {
        // 	if(k>10)
        // 		k += (int)c *100;
        // 	else if(k > 1)
        // 		k += (int)c *10;
        // 	else if(k>100)
        // 		k += (int)c *1000;
        // }
        cout<<s<<"\n";
        // cout<<k<<"\n";
        util(s, sz(s), k);
        cout<<endl;
        }
    return 0;
}