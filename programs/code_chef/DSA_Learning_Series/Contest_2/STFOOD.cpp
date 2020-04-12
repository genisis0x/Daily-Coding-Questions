#include <bits/stdc++.h>
using namespace std;
int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		vector<vector<int> > v;
		vector<int> temp(3);
		for(int i=0; i<n; i++) {
			cin >> temp[0] >> temp[1] >> temp[2];
			v.push_back(temp);
		}
		int max_value = 0;
		for(auto i: v) {
			int s,p,v;
			int flag1=0,flag2=0;
			for(auto j : i) {
				if(flag1) {
					p = j;
					flag1=0;
					flag2=1;
				}
				else if(flag2)
					v = j;
				else {
					s=j;
					flag1=1; 
				}
			}
			max_value = max(((p/(s+1)))*v, max_value);
		}
		cout << max_value << '\n';
	}
    return 0;
}