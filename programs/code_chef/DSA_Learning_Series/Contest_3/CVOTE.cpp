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

// R -> India -> map
// 

int32_t main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; cin >> n >> m;
    map<string, string> country_name_map;
    string name,country;
    for(int i = 0; i < n; ++i) {
    	cin >> name >> country;
    	country_name_map[name] = country;
    }
    map<string, int> name_count_map;
    map<string, int> country_count_map;
    for(int i=0; i<m; ++i) {
    	cin >> name;
    	name_count_map[name]++;
    	country_count_map[country_name_map[name]]++;
    }
    int max_val = 0;
    string best_country,best_chef;
    for(auto i : country_count_map){
    	if(max_val< i.second) {
    		max_val = i.second;
    		best_country = i.first;
    	}
    }
    max_val = 0;
    for(auto i : name_count_map) {
    	if(max_val < i.second) {
    		best_chef = i.first;
    		max_val = i.second;
    	}
    }
    cout << best_country << '\n' << best_chef << '\n';
    return 0;
}