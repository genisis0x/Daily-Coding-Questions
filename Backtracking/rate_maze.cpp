// https://hack.codingblocks.com/app/contests/1179/p/398


#include<bits/stdc++.h>
using namespace std;

bool RateMazeSolver(vector<vector <char> > &arr, vector<vector <int> > &res, int r, int c, int n, int m)
{
	if(r==n-1 && c==m-1)
	{
		res[r][c] =1;
		for(auto i: res)
		{
			for(int j: i)
				cout<<j<<" ";
			cout<<endl;
		}
		return true;
	}
	if(arr[r][c]=='X')
		return false;
	res[r][c] = 1;
	if(c+1 < m && arr[r][c+1]!='X')
	{
		bool hori_mila_kya = RateMazeSolver(arr, res, r, c+1, n, m);
		if(hori_mila_kya)
			return true;
	}
	if(r+1 < n && arr[r+1][c]!='X')
	{
		bool verti_mila_kya = RateMazeSolver(arr, res, r+1, c, n, m);
		if(verti_mila_kya)
			return true;
	}
	res[r][c] = 0;
	return false;
}

int main() {
	int n,m; cin>>n>>m;
	vector<vector <int> > res(n, vector<int>(m, 0));
	vector<vector <char> > arr(n, vector<char>(m));
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
			cin>>arr[i][j];
	}
	if(!RateMazeSolver(arr, res, 0, 0, n, m))
		cout<<-1<<"\n";
	return 0;
}
