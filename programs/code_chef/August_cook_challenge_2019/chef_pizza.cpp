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


void util(vector< vector <int> > &g, int n)
{
	int dist = 0;
	int max = INT_MIN;
	int l_dist = 0;
	int r_dist = 0;
	int i_dx = 0;
	int rr_dist = 0;
	int ll_dist = 0;
	F0R(i, n)
	{
		F0R(j, n)
		{
			rr_dist = 0;
			ll_dist = 0;
			if (j >= n/2)
			{
				if(g[i][j] == 1)
				{
					rr_dist += 1;
					r_dist += 1;
				}
			}
			else
			{
				if(g[i][j] == 1)
				{
					ll_dist += 1;
					l_dist +=1;
				}
			}
		}
		//cout<<abs(l_dist - r_dist)<<"\n";
		if(max < abs(ll_dist - rr_dist))
		{
			max = abs(ll_dist - rr_dist);
			i_dx = i;
		}
	}
	//cout<<l_dist<<r_dist<<"\n";
	dist = abs(l_dist - r_dist);
	int j = 0;
	int dist_temp = dist;
	//int flag = 1;
	while(j < n /2)
	{
		dist_temp -= 2 *g[i_dx][j];
		j++;
	}
	if(dist_temp < dist)
		cout<<dist_temp;
	else
		cout<<dist;
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
        vector< vector <int> > g(n);
        F0R(i,n)
        {
        	g[i] = vector<int>(n);
        	F0R(j,n)
        	{
        		cin>>g[i][j];
        	}
        }
        util(g, n);
        cout<<endl;
        }
    return 0;
}