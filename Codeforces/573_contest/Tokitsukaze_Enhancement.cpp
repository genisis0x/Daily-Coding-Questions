#include <bits/stdc++.h>
using namespace std;

int main()
{
	int nb;
	cin >> nb;
	int hp = nb % 4;
	if(hp == 1)
	{
		cout << "0 " << "A" << endl;
	}
	if(hp == 2)
	{
		cout << "1 " << "B" << endl;
	}
	if(hp == 3)
	{
		cout << "2 " << "A" << endl;
	}
	if(hp == 0)
	{
		cout << "1 " << "A" << endl;
	}
	return 0;
}
