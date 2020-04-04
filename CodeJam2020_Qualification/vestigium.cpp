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
 //   	#ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

 //    ios_base::sync_with_stdio(false);
 //    cin.tie(NULL);

    int t;
    cin>>t;
    int i =1;
    while(i <= t){
        int n;
        cin>>n;
        int trace = 0;
        // trace -> sum of diagonal 
        int arr[n][n];
        int refCol[n+1];
        int refRow[n+1];
        memset(refRow, 0, sizeof(refRow));
        memset(refCol, 0, sizeof(refCol));
        int colRep = 0;
        int rowRep = 0;
        bool isCol = 0;
        bool isRow = 0;
        for(int i=0; i<n; i++){
        	for(int j=0; j<n; j++) {
        		cin >> arr[i][j];
        		if(i==j)
        			trace += arr[i][j];
        		if(refCol[arr[i][j]])
        			isCol = true;
        		refCol[arr[i][j]] = 1;
        	}
        	if(isCol)
        		colRep++;
        	isCol = false;
        	memset(refCol, 0, sizeof(refCol));
        }
        for(int i=0; i<n; i++) {
        	for(int j=0; j<n; j++) {
        		if(refRow[arr[j][i]])
        			isRow = true;
        		refRow[arr[j][i]] = 1;
        	}
        	if(isRow)
        		rowRep++;
        	isRow = false;
        	memset(refRow, 0, sizeof(refRow));
        }
        cout << "Case #" << i <<": " << trace << ' ' << colRep << ' ' << rowRep << '\n';
        i++;
        }
    return 0;
}