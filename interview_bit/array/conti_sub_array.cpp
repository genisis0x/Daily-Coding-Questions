// Passed
// https://www.interviewbit.com/problems/max-sum-contiguous-subarray/
int Solution::maxSubArray(const vector<int> &a) 
{
    int cur_max = a[0]; int glob_max = a[0];
    for(int i = 1; i < a.size(); i++)
    {
        cur_max = max(a[i], a[i] + cur_max);
        glob_max = max(glob_max, cur_max);
    }
    return glob_max;
}
