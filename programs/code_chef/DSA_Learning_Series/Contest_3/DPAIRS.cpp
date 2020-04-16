// // Created by Manmeet Singh Parmar
// // name of snippet-> temp.sublime-snippet
// // path -> sublime text 3/packages/user/temp.sublime-snippet

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// int32_t main()
// {
//    	#ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// 	#endif

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

// 	   int n,m;
//     cin>>n>>m;
//     vector<pair<int, int> > A(n);
//     vector<pair<int ,int> > B(m);
//     for(int i = 0 ; i < n; ++i) {
//     	cin >> A[i].first;
//     	A[i].second = i;
//     }
//     for(int i = 0 ; i < m; ++i) {
//     	cin >> B[i].first;
//     	B[i].second = i;
//     }
//     sort(A.begin(), A.end());
//     sort(B.begin(), B.end());
    
//     for(int i = 0; i < n; ++i) {
//     	cout << A[i].second << ' ' << B[0].second << '\n'; 
//     }
//     for(int i = 1; i < m; ++i) {
//     	cout << A[n-1].second << ' ' << B[i].second << '\n'; 
//     }
//    return 0;
// }





// Method 2 TC-O(N) + SC-O(1)

#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
       #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<int> A(n);
    vector<int> B(m);
    int min_valB = 0;
    int max_valA = 0;
    for(int i = 0; i < n; ++i) {
        cin >> A[i];
        if(A[max_valA] < A[i])
            max_valA = i;
    }
    for(int i = 0; i < m; ++i) {
        cin >> B[i];
         if(B[min_valB] > B[i])
            min_valB = i;
    }
    for(int i = 0; i < n; ++i) {
        cout << i << ' ' << min_valB << '\n';
    }
    for(int i = 0; i < m; ++i) {
        if(i==min_valB)
            continue;
        cout << max_valA << ' ' << i << '\n';
    }
    return 0;
}