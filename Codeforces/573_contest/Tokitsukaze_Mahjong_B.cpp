// Incorrect version

#include <bits/stdc++.h>
using namespace std;

int check_me(string s1, string s2, string s3)
{
	if((s1[1] == s2[1]) && (s2[1] == s3[1])) 
	{
		char a = s1[0];
		char b = s2[0];
		char c = (char)abs(2);
		if(a == b && (b == c))
		{
			return 2;
		}
		if((abs((int)(s1[0] - s2[0])) == 1|| abs((int)(s1[0] - s2[0])) == 2) && (abs((int)(s2[0] - s3[0])) == 1|| abs((int)(s2[0] - s3[0])) == 2))
			return 1;
		if((s1[0] == s2[0]) && (s2[0] == s3[0]))
			return 1;
		
	}
	return 0;
}

int main()
{
	string s1,s2,s3;
	cin >> s1 >> s2 >> s3;
	if(!check_me(s1, s2, s3))
	{
		char c = s1[1];
		char d = s2[1];
		char e = s3[1];
		if((c == d )|| (d == e) || (c == e))
		{
			if(c == d)
			{
				if(s1[0] == s2[0])
					cout << "1" << endl;
				else if (abs((int)(s1[0] - s2[0])) == 1 || abs((int)(s1[0] - s2[0])) == 2)
					cout << "1" << endl;
			}
			else if(d == e)
			{
				if(s2[0] == s3[0])
					cout << "1" << endl;
				else if(abs((int)(s2[0] - s3[0])) == 1|| abs((int)(s2[0] - s3[0])) == 2)
					cout << "1" << endl;
			}
			else if(c == e)
			{
				if(s1[0] == s3[0])
					cout << "1" << endl;
				else if(abs((int)(s3[0] - s1[0])) == 1|| abs((int)(s3[0] - s1[0])) == 2)
					cout << "1" << endl;
			}
		}
		else
			cout << "2" << endl;
	}
	else
		cout << "0" << endl;
	return 0;
}
