#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    cout<<"Please enter the number for which factorial is needed \n";
    ll n; cin>>n;
    ll s =1;
    for(ll i=1; i<=n; i++)
        s = s * i;
    cout<<"The factorial of number "<<n<<"is: "<<s<<"\n";
}
