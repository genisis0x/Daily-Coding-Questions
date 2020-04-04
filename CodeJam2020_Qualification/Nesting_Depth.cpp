// Created by Manmeet Singh Parmar
#include <bits/stdc++.h>
using namespace std;

string result(string s)
{
	int num = -1;
	string res = "";
	bool singleDigitFlag = 1;
	for(int i=0; i < s.length() - 1; i++) {
		singleDigitFlag = 0;
		num = s[i] - '0';
		int iterator = 0;
		if(i==0) 
		{
			while(iterator < num) {
			res += '(';
			iterator++;
		}
		res += s[i];
		} 
		int secondNum = s[i+1] - '0';
		int secondI = num - secondNum;
		if(secondI > 0) {
			while(secondI--) {
				res += ')';
			}
			res += s[i+1];
		}
		else if(secondI < 0) {
			while(secondI++)
			{
				res += '(';
			}
			res += s[i+1];
		}
		else
			res += s[i+1];
	}
	if(singleDigitFlag) {
		int firstNum = s[0] - '0';
		int it = 0;
		while(it < firstNum) {
			res += '(';
			it++;
		}
		res += s[0];
		while(firstNum--)
			res += ')';
	}
	else
		{
			int lastNum = s[s.length()-1] - '0';
			while(lastNum > 0) {
				res += ')';
				lastNum--;
			}
		}
	return res;
}



int main()
{
 //   	#ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

 //    ios_base::sync_with_stdio(false);
 //    cin.tie(NULL);

    int t;
    cin>>t;
    int i = 1;

    while( i <= t){
    	string s; cin >> s;
    	cout << "Case #" << i  <<": "<< result(s) << '\n';
        i++;
        }
    return 0;
}