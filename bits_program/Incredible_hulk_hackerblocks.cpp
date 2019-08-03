// QUESTIONS
/*
The Planet Earth is under a threat from the aliens of the outer space and the Marvel Avengers team is busy fighting against them.
Meanwhile, The increadible Hulk has to defeat an enemy who is N steps above the level where he is standing (assume it as the 0th Level).
Hulk, because of his incredible jumping ability can take jumps in power of 2.
In order to defeat the enemy as quickly as possible he has to reach the Nth step in minimum moves possible.
Help Hulk to find the same and contibute in saving the Mother Earth.
*/ 
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
        int n;
        cin>>n;
        int i = 0;
        int count = 0;
        while(n)
        {
        	count++;
        	n &= n-1;
        }
        cout<<count<<endl;
        }
    return 0;
}