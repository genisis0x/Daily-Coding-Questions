// Created by Manmeet Singh Parmar

#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef vector<int> vi;
#define FOR(i, n)  for(int i=0; i<(n); i++)

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
    	int n,z;
        cin>>n>>z;
        vi v(n);
        priority_queue<int> pq;
        FOR(i,n) {
        	cin >> v[i];
        	pq.push(v[i]);
        }
        int cnt = 0;
        while(z > 0 && !pq.empty()) {
        	int power = pq.top();
        	z -= power; pq.pop();
        	if(power)
        		pq.push(power >> 1);
        	cnt++;
        }
        if(z>0)
        	cout << "Evacuate" << '\n';
        else
        	cout << cnt << '\n';
    }
    return 0;
}