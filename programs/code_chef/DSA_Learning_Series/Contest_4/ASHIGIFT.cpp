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
    	int X; cin >> X;
    	int B; cin >> B;
    	std::vector<pair<int, int>> negatives;
    	int x,y;
    	int max_chefs = 0;
    	FOR(i,B) 
    		cin >> x >> y, 
    		max_chefs += y, 
    		negatives.push_back({x,-y});
    	int c; cin >> c;
    	int p,q,r;
    	vector<pair<pair<int, int>, int> > positives;
    	int i=0;
    	while(i < c) {
    		cin >> p >> q >> r;
    		positives.push_back({{p,q},r});
    		i++;
    	}
    	if(c==0) {
    		cout << max_chefs+1 << '\n';
    		continue;
    	}
    	// function to check if value of chef taken is ok or not.
    	auto isok = [&](int check_chef){
    		int i=0, j = 0;
    		while(i < B && j < c) {
				if(negatives[i].first > positives[j].first.first) {
					if(check_chef >= positives[j].first.second)
						check_chef += positives[j].second;
					j++;
				}
				else if(negatives[i].first < positives[j].first.first){
					check_chef += negatives[i].second;
					i++;
				}
				else {
					check_chef += negatives[i].second;
					i++;
					if(check_chef >= positives[j].first.second)
						check_chef += positives[j].second;
					j++;	
				}
				if(check_chef <= 0)
					return false;
			}
			while(i<B) {
				check_chef += negatives[i].second;
				i++;
				if(check_chef <=0)
					return false;
			}
			return true;
    	};
    	// for(auto i : negatives)
    	// 	cout << i.second << ' ';
    	// cout << max_chefs << '\n';
    	// Binary search
    	int low = 0;
    	int high = max_chefs;
    	while(low < high) {
    		int mid = (high-low)/2 + low;
    		if(isok(mid)) {
    			high = mid;
    		}
    		else {
    			low = mid+1;
    		}
    	}
    	if(isok(high))
    		cout << high << '\n';
    	else
    		cout << high+1 << '\n';
    }
    return 0;
}