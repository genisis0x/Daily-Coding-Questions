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

#define FOR(i, x, n) for(int i=x; i<(n); i++)
#define F0R(i, n)  for(int i=0; i<(n); i++)
#define FORd(i, x, n) for(int i = (n)-1; i >= x; i--)
#define F0Rd(i,n) for(int i = (n)-1; i >= 0; i--)
#define FOR_B_l(i,n) for(int i = 0; i < (1 << n); i++)
#define FOR_B_r(i,n) for(int i = 0; i < (1 >> n); i++)


#define l_rot_n(a, n) (a << n)
#define r_rot_n(a, n) (a >> n)

#define mod 1000000007
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define sz(x) (int)(x).size()
using namespace std;


int main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    int t;
    cin>>t;
    while(t--){
    	int n, i;
        cin>>n;
        cin >>i;
        (n & (1 << i)) ? cout<<"1" : cout<<"0";
        cout<<endl;
        }
    return 0;
}