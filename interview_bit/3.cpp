// passed partially

#define div 10000000
#include <bits/stdc++.h>
using namespace std;
int util(string A, int k)
{
    int n = A.length();
    int res = 0;
    int arr[26];
    for(int i =0; i < n; i++)
    {
        int dist_cnt = 0;
        memset(arr, 0, sizeof(arr));
        for(int j = i; j < n; j++)
        {
            if(arr[A[j] - 'a'] == 0)
                dist_cnt++;
            arr[A[j] - 'a']++;
            
            if(dist_cnt == k)
                res++;
            if(dist_cnt > k)
                break;
        }
    }
    return res;
}

int solve(string A) {

    int n = A.length();
    int count = 0;
    for(int i = 2; i <= n; i++)
    {
        count += util(A, i);
    }
    return count;
}
