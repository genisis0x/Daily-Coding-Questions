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



void util(vi &v1, vi &v2, int n)
{
	map<int, int> hm;
	int flag = 1;
	int ref =0;
	int c=0;
	for(int i=0; i<n; i++)
	{
		v2[i] -= v1[i];
		if(v2[i]>0){
			ref = v2[i];
			hm[v2[i]] += 1;
		}
		else if(v2[i]<0)
		{
			cout<<"NO";
			return;
		}
	}
	if(hm.size()>1)
	{
		cout<<"NO";
		return;
	}
	if(hm.size()==0)
	{
		cout<<"YES";
		return;
	}
	int i=0;
	while(i<n)
	{
		if(v2[i]!=0)
			break;
		i++;
	}
	while(i<n)
	{
		if(v2[i]>0)
			c++;
		else
			break;
		i++;
	}
	if(c==hm[ref]){
		cout<<"YES";
	}
	else
		cout<<"NO";

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
        int n;
        cin>>n;
        vi v1(n);
        vi v2(n);
        F0R(i,n)
        	cin>>v1[i];
        F0R(i,n)
        	cin>>v2[i];
        util(v1, v2, n);
        cout<<endl;
        }
    return 0;
}