// PASSED
//https://practice.geeksforgeeks.org/problems/count-1s-in-binary-array/1/?track=SPCF-Searching&batchId=154
int countOnes(int n)
{
    int l = 0; int r = n -1;
    int p = 0;
    while(l <= r)
    {
        int mid = (r - l)/ 2 + l;
        if(arr[mid] == 1 && (arr[mid + 1] == 0 || mid == n -1))
        {
            p = mid;
            break;
        }
        else if(arr[mid] == 0)
            r = mid - 1;
        else
            l = mid + 1;
    }
    if(p > 0)
        return p+1;
    else
        return 0;
    // Your code here
}
