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
    while (t--) {
        ll k,d0,d1,count,base,sum;
        count = 0;
        cin >> k >> d0 >> d1;
        count = d0 + d1;
        count += (count%10);
        
        base = d0+d1;
        base %= 10;
        k-= 3;

        int arr[4];
        arr[0] = (2*base)%10;
        arr[1] = (4*base)%10;
        arr[2] = (8*base)%10;
        arr[3] = (6*base)%10;
        sum = 0;
        for(int i=0; i<4; i++)
            sum += arr[i];
        ll multiplier = k / 4;
        int reminder = k % 4;
        count = count + (sum)*multiplier;
        int i=0;
        while(i < reminder) {
            count += arr[i];
            i++;
        }
        if(count%3)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
