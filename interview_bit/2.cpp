// Passed Partially


#include <bits/stdc++.h>
using namespace std;

string solve(string A, int B, int C) {
    // B swaps - > max 10 ^ 8
    // A string -> max 10^5
    // C is an int;
    int n = (int)A.size(); 
    for(int i = 1; i <= B; i++)
    {
        swap(A[i % n], A[(i + C) % n]);
    }
    return A;
}
