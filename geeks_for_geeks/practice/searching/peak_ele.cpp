// PASSED
// https://practice.geeksforgeeks.org/problems/peak-element/1/?track=SPCF-Searching&batchId=154

int peakElement(int a[], int n)
{
    int l = 0;
    int r = n-1;
    while(l<=r)
    {
        int m = (r - l)/ 2 + l;
        if(a[0] >= a[1])
            return 0;
        if(a[n - 1] >= a[n - 2])
            return n -1;
        if(a[m] > a[m + 1] && a[m] > a[m - 1])
            return m;
        if(a[m] < a[m + 1])
            l = m + 1;
        if(a[m] > a[m + 1])
            r = m - 1;
    }
    return -1;
}



// M2

/*
int peakElement(int a[], int n)
{
    // cout<<a[0]<<"\n"<<a[1]<<"\n";
    if(a[0] >= a[1])
        return 0;
    if(a[n - 1] >= a[n - 2])
        return n -1;
    for(int i = 1; i < n -1; i++)
    {
        if((a[i] >= a[i -1]) && (a[i] >= a[i+1]))
            return i;
    }
    return -1;
}
*/
