// https://app.codility.com/programmers/lessons/2-arrays/odd_occurrences_in_array/

#include <bits/stdc++.h>
using namespace std;
int solution(vector<int> &A) 
{
    long long temp = 0;
    for(long long i = 0; i < (long) A.size(); i++)
    {
        temp ^= A[i];
    }
    return temp;
}
