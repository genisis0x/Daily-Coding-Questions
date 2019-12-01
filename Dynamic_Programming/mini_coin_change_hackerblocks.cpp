// 1, 2, 5 10, 20, 50, 100, 200, 500, 2000

//change->137

#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		#endif
	
	    ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	
	int m1, d1; cin>>m1>>d1;
	int m2, d2; cin>>m2>>d2;
	int ref[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(d1==ref[m1-1])
		cout<<1<<"\n";
	else
		cout<<0<<"\n";
	return 0;
}
