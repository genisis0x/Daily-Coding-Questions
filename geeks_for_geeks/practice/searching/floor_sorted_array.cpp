// PASSED
// https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array/1/?track=SPCF-Searching&batchId=154 

typedef long long ll;
int findFloor(vector<long long> v, long long n, long long x){

    ll l = 0;
    ll r = n -1;
    while(l<=r){
        ll m = (r - l)/2 + l;
        if(m == n -1 || v[m] <= x && v[m + 1] > x && m>0)
            return m;
        if(v[m] > x)
             r = m - 1;
        if(v[m] < x)
            l = m + 1;
        if(m == 0 && v[m] != x && v[m+1] > x)
            return -1;
    }
}
