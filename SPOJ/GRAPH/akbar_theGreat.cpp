// Function to return the maximized median by performing at most K operation 
#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(int *arr, int N, int K) {
	sort(arr, arr+N);
	auto isOk = [&](int median) {
	    int operation = 0;
		for(int i=N/2; i < N; ++i) {
			if(median - arr[i] > 0)
				operation += (median - arr[i]);
			if(operation > K)
				return false;
		}
		return (operation <= K);
	};
	
	int lo = arr[N/2];
	int hi = arr[N-1] + K;
	int ans = 0;

	// Binary Search on the search space of max median where as median belongs to [lo,ho]
	while(lo<=hi) {
		int mid = (hi-lo)/2 + lo;
		if(isOk(mid)) {
			lo = mid+1;
			ans = mid;
		}
		else
			hi = mid-1;
	}
	return ans;
}

int32_t main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int N,K; cin >> N >> K;
	int arr[N];
	for(int i=0; i<N; ++i)
		cin >> arr[i]; 
	cout << solve(arr, N, K) << endl;
	return 0;
} 
