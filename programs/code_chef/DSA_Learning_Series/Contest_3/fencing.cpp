// Created by Manmeet Singh Parmar
// name of snippet-> temp.sublime-snippet
// path -> sublime text 3/packages/user/temp.sublime-snippet

#include <bits/stdc++.h>
using namespace std;
#define int long long

typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;

#define FOR(i, n)  for(int i=0; i<(n); i++)
#define FORA(i, a, n) for(int i = a; i <= (n); ++i)
#define FORD(i, a, n) for(int i = a; i >= (n); --i);
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

int32_t main()
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
    	int n,m,k,count=0; 
    	cin >> n >> m >> k;
    	int arr[k][2];
    	map<pair<int,int>, int> check;
    	for(int j=0;j<k;j++)
		{
			int x,y;
			cin>>x>>y;
			arr[j][0]=x;
			arr[j][1]=y;
			check[make_pair(x,y)]=1;
		}
		for(int j=0;j<k;j++)
		{
			if(check.find({arr[j][0]-1,arr[j][1]})==check.end())
				count++;
			if(check.find({arr[j][0]+1,arr[j][1]})==check.end())
				count++;
			if(check.find({arr[j][0],arr[j][1]-1})==check.end())
				count++;
			if(check.find({arr[j][0],arr[j][1]+1})==check.end())
				count++;
		}
		cout<<count<<"\n";
		check.clear();
    }
    return 0;
}