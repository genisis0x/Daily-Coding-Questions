#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin >> q;
    while(q > 0)
    {
        long long a[3];
        cin >>a[0]>>a[1]>>a[2];
        long long res = 0;
        res = a[0] +a[1] +a[2];
        res /=2;
        q--;
        cout << res << endl; 
    }
    return 0;
}
