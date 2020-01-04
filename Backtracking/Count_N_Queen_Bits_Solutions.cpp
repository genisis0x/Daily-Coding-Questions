#include<bits/stdc++.h>
using namespace std;
bitset <30> C,D1,D2;
void Nqueen(int r, int n, int &ans)
{
	if(r==n)
	{
		ans++;
		return;
	}
	for(int c=0; c<n; c++)
	{
		if(!C[c] && !D1[r-c+n-1] && !D2[r+c])
		{
			C[c] = D1[r-c+n-1] = D2[r+c] = 1;
			Nqueen(r+1, n, ans);
			C[c] = D1[r-c+n-1] = D2[r+c] = 0;
		} 
	}
}
int main() {
	int n; cin>>n;
	int ans = 0;
	Nqueen(0, n, ans);
    cout<<ans<<endl;
	return 0;
}

