#include <bits/stdc++.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
    int t;
    cin>>t;
    while(t--)
    {
		int N;
		cin>>N;
		int arr[N];
		for(int i=0;i<N;i++)
			cin>>arr[i];
		int max = arr[N - 1];
		int ref[N];
		int i = -1;
		memset(ref, -1, sizeof(ref));
		i = -1;
		int k = 0;
		for(int i = N-2; i >= 0; i--)
		{
			if(arr[i] >= max)
			{
				ref[k++] = arr[i];
				max = arr[i];
			}
		}
		while(--k >= 0)
			cout<<ref[k]<<" ";
		cout<<arr[N -1];
		cout<<endl;
	}
	return 0;
}

// 2 1 4 5 7 8 3 2 9 10 15 17