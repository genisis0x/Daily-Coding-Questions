// Created by Manmeet Singh Parmar
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
#define F0R(i, n)  for(int i=0; i<(n); i++)
#define FORd(i, x, n) for(int i = (n)-1; i >= x; i--)
#define F0Rd(i,n) for(int i = (n)-1; i >= 0; i--)
#define FOR_B_l(i,n) for(int i = 0; i < (1 << n); i++)
#define FOR_B_r(i,n) for(int i = 0; i < (1 >> n); i++)


#define l_rot_n(a, n) (a << n)
#define r_rot_n(a, n) (a >> n)

#define mod 1000000007
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define sz(x) (int)(x).size()
using namespace std;


int count_bits(int n)
{
    int count = 0;
    while(n)
    {
        count += n&1;
        n >>= 1;
    }
	return count;
}
int main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    int t;
    cin>>t;
    while(t--){
        int n1,n2;
        cin>>n1;
        cin>>n2;
        int temp = (n1 ^ n2); // xor will give the different bits in both the numbers.
        // TC -> O(No of bits)
        cout<<count_bits(temp); // find the count_bits to count the bits in a number.
        cout<<endl;
        }
       
//MEthod 2
       // with the hack of (n & n-1) we get the no of bits
        // TC is O(no of set bits)
    // while(n)
    // {
    //     count++;
    //     n &= n-1;
    // }

    return 0;
}