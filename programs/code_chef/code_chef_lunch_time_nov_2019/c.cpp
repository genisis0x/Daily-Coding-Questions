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

#define FOR(i, x, n) for(ll i=x; i<(n); i++)
#define F0R(i, n)  for(ll i=0; i<(n); i++)
#define FORd(i, x, n) for(ll i = (n)-1; i >= x; i--)
#define F0Rd(i,n) for(ll i = (n)-1; i >= 0; i--)
#define FOR_B_l(i,n) for(ll i = 0; i < (1LL << n); i++)
#define FOR_B_r(i,n) for(ll i = 0; i < (1LL >> n); i++) // typecasting of 1 in long long


#define l_rot_n(a, n) (aLL << n) // type casting of a in long long and lef rotation of a with n;

#define r_rot_n(a, n) (aLL >> n)

#define mod 1000000007
#define pi 2acos(0.0)
#define MP make_pair
#define PB push_back
#define EB emplace_back // its's faster than push_back
#define F first
#define S second
#define sz(x) (int)(x).size()
#define what_is(x) cerr << #x << "is" << x << endl;
#define gcd(a, b) __gcd(num1 , num2)

void longestSeq(string arr, int n, int k)
{
    int left = 0;        // left represents current window's starting index
 
    int count = 0;      // stores number of zeros in current window
 
    int window = 0;     // stores maximum number of continuous 1's found
                        // so far (including k zeroes)
 
    int leftIndex = 0;  // store left index of maximum window found so far
 
    // maintain a window [left..right] containing at-most k zeroes
    for (int right = 0; right < n; right++)
    {
        // if current element is 0, increase count of zeros in the
        // current window by 1
        if (arr[right] == 0)
            count++;
 
        // window becomes unstable if number of zeros in it becomes
        // more than k
        while (count > k)
        {
            // if we have found zero, decrement number of zeros in the
            // current window by 1
            if (arr[left] == 0)
                count--;
 
            // remove elements from the window's left side till window
            // becomes stable again
            left++;
        }
 
        // when we reach here, the window [left..right] contains at-most
        // k zeroes and we update max window size and leftmost index
        // of the window
        if (right - left + 1 > window)
        {
            window = right - left + 1;
            leftIndex = left;
        }
    }
 
    // print maximum sequence of continuous 1's
    printf("The longest sequence has length %d from index %d to %d", window,
            leftIndex, (leftIndex + window - 1));
}
int main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
    	int n; int k; cin>>n>>k;
    	string s; cin>>s;
    	// cout<<s<<"\n";
    	longestSeq(s, n, k);
    }
    return 0;
}