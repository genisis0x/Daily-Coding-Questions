// https://www.geeksforgeeks.org/difference-array-range-update-query-o1/
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




vi util_differece_array(vi &arr)
{
	int n = arr.size();
	vi diff(n + 1);
	diff[0] = arr[0];
	diff[n] = 0;
	FOR(i, 1, n)
		diff[i] = arr[i] - arr[i - 1];
	return diff;
}


void update_query(vi &diff, int l, int r, int value)
{
	diff[l] += value;
	diff[r + 1] -= value;
}


void print_array(vi &arr, vi &diff)
{
	int n = arr.size();
	F0R(i, n)
	{
		if(i == 0)
			arr[i] = diff[i];
		else
			arr[i] = diff[i] + arr[i - 1];
		cout<<arr[i]<<" ";
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
    while(t--){
        int n;
        cin>>n;
        vi v(n);
        F0R(i,n)
        	cin>>v[i];
        vi diff = util_differece_array(v);
        update_query(diff, 0, 1, 10);
        print_array(v, diff);
        cout<<endl;
        }
    return 0;
}