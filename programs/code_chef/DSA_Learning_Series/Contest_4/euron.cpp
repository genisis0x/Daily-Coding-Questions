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

int merger(vi &arr, int left, int mid, int right) {
	int i=left;
	int j = mid+1;
	vi res;
	int inversion = 0;
	while(i <=mid && j<=right) {
		if(arr[i] <= arr[j]) {
			res.push_back(arr[i]);
			i++;
		}
		else {
			res.push_back(arr[j]);
			// cout << (mid-i+1) << '\n';
			inversion = inversion + (mid - i+1);
			j++;
		}
	}
	while(i<=mid) {
		res.push_back(arr[i]);
		i++;
	}
	while(j<=right){
		res.push_back(arr[j]);
		j++;
	}
	// for(int i : res)
	// 	cout << i << ' ';
	// cout << '\n';
	int size = res.size();
	for(int i=left; i<=right; i++) {
		arr[i] = res[i-left];
	}
	return inversion;
}




int violation_merge_sort(vi &arr, int left, int right) {
	if(left >= right)
		return 0;
	int mid = (right-left)/2 + left;
	int v1 = violation_merge_sort(arr, left, mid);
	int v2 = violation_merge_sort(arr, mid+1, right);
	int v3 = merger(arr, left,mid,right);
	// cout << v1 << ' ' << v2 << ' ' << v3 << '\n';
	return v1 + v2 + v3;
}
int violation(vi &arr) {
	return violation_merge_sort(arr, 0, arr.size()-1);
}

int32_t main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vi arr(n);
    FOR(i,n) cin >> arr[i];
   	cout << violation(arr);
    return 0;
}