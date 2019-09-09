//PASSED
// https://practice.geeksforgeeks.org/problems/minimum-number-in-a-sorted-rotated-array/1/?track=SPCF-Searching&batchId=154

int minNumber(int a[], int l, int h)
{
    while(l <= h)
    {
        int m = (h - l)/2 + l;
        if(h == l)
            return a[l];
        if (m < h && a[m + 1] < a[m])
            return a[m + 1];
        if (m > l && a[m] < a[m - 1])
            return a[m];
        if(a[m] < a[h])
            h = m -1;
        else
            l = m + 1;
    }
}
