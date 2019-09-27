// Passed
// Cpp
// https://practice.geeksforgeeks.org/problems/number-following-a-pattern/0
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define MOD 1000000007
int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    string str; cin>>str; stack<int> s;
	    for(int i=0; i<=str.length(); i++)
	    {
	        s.push(i+1);
	        if(str[i]=='I' || i==str.length())
	        {
	            while(!s.empty())
	            {
	                cout<<s.top();
	                s.pop();
	            }
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
