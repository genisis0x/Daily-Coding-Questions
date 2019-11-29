

int Solution::longestSubsequenceLength(const vector<int> &A) 
{
    int n = A.size();
    if(n==0)
        return 0;
    int dp[n];
    int r_dp[n];
    for(int i=0; i<=n; i++)
        dp[i] = 1;
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(A[i]>A[j])
                dp[i] = max(dp[i], dp[j]+1);
        }
    }
    for(int i=0; i<n; i++)
        r_dp[i] = 1;
    for(int i=n-2; i>=0; i--)
    {
        for(int j=n-1; j>i; j--)
        {
            if(A[i]>A[j])
                r_dp[i] = max(r_dp[i], r_dp[j]+1);
        }
    }
    int max_v = INT_MIN;
    for(int i=0; i<n; i++){
        max_v = max(r_dp[i]+dp[i]-1, max_v);
        
    }
    return max_v;
}

