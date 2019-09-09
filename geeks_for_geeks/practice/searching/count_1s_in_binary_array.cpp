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

// M2

/*
int l_i(int n, int l, int r){
    while(l <= r)
    {
        int mid = (r - l)/2 +l;
        if(mid == 0 && arr[mid] == 0)
            return -1;
        if(mid == 0 && arr[mid] == 1)
            return 0;
        if(mid == n -1 || arr[mid + 1] == 0 && arr[mid] == 1)
            return mid;
        else if(arr[mid] == 1)
            return l_i(n, mid + 1, r);
        else
            return l_i(n, l, mid-1);
    }
}

int countOnes(int n)
{
    // int f_idx = f_i(n,0, n -1);
    int l_idx = l_i(n, 0, n -1);
    return l_idx + 1;
}
*/
