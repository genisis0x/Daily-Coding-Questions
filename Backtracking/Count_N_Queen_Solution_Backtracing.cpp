#include<bits/stdc++.h>
using namespace std;
int c =0;
bool SafeWay(int **board, int row, int col, int n)
{
    int r=row;
    int c=col;
    while(r>=0 && c>= 0)
    {
        if(board[r][c])
            return false;
        r--; c--;
    }
    r = row;
    c = col;
    while(r<n && c>=0)
    {
        if(board[r][c])
            return false;
        r++;
        c--;
    }
    for(int i=col; i>=0; i--)
        if(board[row][i])
            return false;
    return true;
}




int Nqueen(int **board,int col, int n)
{
	if(col==n)
    {
        // c++;
		return 1;
    }
	for(int row=0; row<n; row++)
	{
        if(SafeWay(board, row, col, n))
        {
            board[row][col] = 1;
            c += Nqueen(board, col+1, n);
            board[row][col] = 0;
        }
	}
    return 0;
}
int main() {
	int n; cin>>n;
	int** board = new int*[n];
	for(int i=0; i<n; i++)
	{
		board[i] = new int[n];
		for(int j=0; j<n; j++)
			board[i][j] = 0;
	}
	Nqueen(board, 0, n);
    cout<<endl;
    cout<<c<<endl;
	return 0;
}
