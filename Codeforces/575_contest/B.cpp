// Passed
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;
 
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
 
 
#define FOR(i, x, n) for(int i=x; i<(n); i++)
#define F0R(i, n) for (int i=0; i<(n); i++)
#define FORd(i, x, n) for(int i = (n)-1; i >= x; i--)
#define F0Rd(i,n) for(int i = (n)-1; i >= 0; i--)
 
#define mod 1000000007
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define sz(x) (int)(x).size()
int32_t main()
{
 
#ifdef _DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif
    int q; cin >> q;
    while(q-- > 0)
    {
        // n -> no of elements in array.
        // k no of subsegment's
        int k, n;
        cin >> n >> k;
        vl arr(n);
        int sum = 0;
        int count_odd = 0;
        F0R(i,n)
        {
            cin >> arr[i];
            sum += arr[i];
            count_odd += (arr[i] & 1);
        }
        if(count_odd < k || ((count_odd & 1) != (k & 1)))
        {
                cout << "NO" << endl;
                continue;
        }
        cout << "YES" << endl;
        F0R(j, n)
        {
            if(k==1)
                break;
            if((arr[j] & 1))
            {
                cout << j + 1<< " ";
                --k;
            }
        }
    cout << n << endl;
    }
    return 0;
}
