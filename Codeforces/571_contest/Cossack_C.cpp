#include<iostream>
using namespace std;
 
int n,m;
string a,b;
 
int main()
{
	//ios::sync_with_stdio(false);
	cin>>a>>b;
	n=a.length();
	m=b.length();
	int res=n-m+1,s=0;
	for(int i=0;i<m;++i)
		s^=(a[i]-'0')^(b[i]-'0');
	res-=s;
	for(int i=m;i<n;++i)
	{
		s^=(a[i-m]-'0')^(a[i]-'0');
		res-=s;
	}
	cout<<res<<endl;
	return 0;
}