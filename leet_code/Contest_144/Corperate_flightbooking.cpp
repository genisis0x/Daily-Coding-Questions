#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) 
{
    vector<int> v(n,0);
    if(bookings.size() == 0) return v;

    for(auto i : bookings)
    {
        v[i[0]-1] += i[2];
        if(i[1] < n) v[i[1]] -= i[2];
    }
    
    
    int val = 0;

    for(int i = 0; i < n; i++)
    {
        v[i] += val;
        val = v[i];
    }

    return v;
}
};
