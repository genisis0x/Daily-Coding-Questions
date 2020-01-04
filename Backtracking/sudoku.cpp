#include<bits/stdc++.h>
using namespace std;

bool canPlace(vector< vector<int> > &arr, int n, int row, int col, int number)
{
	if(arr[row][col])
		return false;
	for(int i=0; i<n; i++)
		if(arr[row][i]==number)
			return false;
	for(int i=0; i<n; i++)
		if(arr[i][col]==number)
			return false;
	int root = sqrt(n);
	int Box_row = row/root;
	int Box_col = col/root;
	int Start_row = Box_row * root;
	int Start_col = Box_col * root;
	for(int i=Start_row; i< Start_row + root; i++)
	{
		for(int j=Start_col; j< Start_col + root; j++)
			if(arr[i][j]==number)
				return false;
	}
	return true;
}


void SudokuSolver(vector< vector<int> > &arr, int n, int row, int col)
{
	if(row==n)
	{
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
				cout<<arr[i][j]<<" ";
			cout<<endl;
		}
		return;
	}

	if(col==n)
		SudokuSolver(arr, n, row+1, 0);
	
	if(arr[row][col])
		SudokuSolver(arr, n, row, col+1);
	
	for(int i=1; i<=n; i++)
	{
		if(canPlace(arr, n, row, col, i))
		{
			arr[row][col] = i;
			SudokuSolver(arr, n, row, col+1);
			arr[row][col] = 0;
		}
	}
}


int main() {
	int n; cin>>n;
	vector< vector<int> > arr(n, vector<int>(n));
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cin>>arr[i][j];
	}
	SudokuSolver(arr, n, 0, 0);
	return 0;
}

