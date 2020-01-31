#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define MOD 1000000007

int PrimeSieve(int n)
{
    bool table[n+1];
    memset(table, true, sizeof(table));
    table[0] = table[1] = 0;
    for(int i=4; i<=n; i +=2)
        table[i] = 0;
    for(int i=3; i<= n; i+= 2)
    {
        if(table[i])
        {
            for(int j = i*i; j <= n; j += i)
            {
                table[j] = 0;
            }
        }
    }
    if(n >= 2)
        cout << "2 ";
    for(int i=3; i <= n; i+= 2)
    {
        if(table[i])
            cout << i <<" ";
    }
}


int main()
 {
	int t; cin>>t; 
	while(t--)
	{
	    int n; cin >> n;
	    PrimeSieve(n);
	    cout << '\n';
	}
	return 0;
}
