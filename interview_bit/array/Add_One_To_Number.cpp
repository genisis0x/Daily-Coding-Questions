// Passed
// https://www.interviewbit.com/problems/add-one-to-number/

vector<int> Solution::plusOne(vector<int> &A) 
{
    int n = A.size();
    int carry = 0;
    vector<int> arr(n + 1);
    arr[n] = A[n -1] + 1;
    for(int i = n; i>0; i--)
    {
        arr[i] += carry;
        if(arr[i] > 9)
        {
            carry = arr[i] / 10;
            arr[i] %= 10;
        }
        else
            carry =0;
        if(i != 1)
            arr[i - 1] = A[i - 2];
    }
    if(carry)
        arr[0] = carry;
    int i = 0;
    while(arr[i] == 0)
        arr.erase(arr.begin());
    return arr;
}
