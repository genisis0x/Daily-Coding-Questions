// Created by Manmeet Singh Parmar
#include <bits/stdc++.h>
using namespace std;


int lastStartTime[2];
void util() {
	int n; cin >> n;
	vector<vector<int> > arr(n, vector<int>(3));
	// int arr[n][3];
	for(int i=0; i<n; i++) {
		cin >> arr[i][0] >> arr[i][1];
		arr[i][2] = i;
	}
	char ress[n];
	sort(arr.begin(), arr.end());
	lastStartTime[0]=1e4;
	lastStartTime[1]=1e4;
	char c[2];
	c[0] = 'C';
	c[1] = 'J';
	for(int i=n-1; i >=0; i--) {
		bool assigned = 0;
		int p1 = 0; 
		int p2 = 1;
		if(lastStartTime[p1] > lastStartTime[p2])
			swap(p1, p2);
		if(arr[i][1] <= lastStartTime[p1]) {

			assigned = 1;
			ress[arr[i][2]] = c[p1];
			lastStartTime[p1] = arr[i][0];
		}
		if(!assigned && arr[i][1] <=lastStartTime[p2]) {
			assigned =1;
			ress[arr[i][2]] = c[p2];
			lastStartTime[p2]= arr[i][0];
		}
		if(!assigned) {
			cout << "IMPOSSIBLE\n";
			return;
		}
		// ress[n]='\0';
	}
	for(int i=0; i<n; i++)
			cout << ress[i];
	cout << '\n';
}




int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >>t; 
    for(int i=1; i<=t; i++)
    {
    	cout << "Case #" << i << ": ";
    	util();
    }
}
