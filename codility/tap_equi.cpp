// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


// https://app.codility.com/programmers/lessons/3-time_complexity/tape_equilibrium/
// Passed

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solution(vector<int> &A) {
    int n = A.size();
    ll t_sum = 0;
    int min_val = INT_MAX;
    int r_sum = 0;
    for(int i =0; i<n; i++)
        t_sum += A[i];
    for(int i = 0; i<n-1; i++) // tricky till n-1 only we have to check
    {
        r_sum += A[i];
        t_sum -= A[i];
        int temp = abs(r_sum - t_sum);
        min_val = (min_val < temp) ? min_val : temp;
    }
    return min_val;
}


// GOOD TEST CASE
[-1000, 1000]
