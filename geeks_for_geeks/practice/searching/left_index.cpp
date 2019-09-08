// PASSED
// https://practice.geeksforgeeks.org/problems/left-index/1/?track=SPCF-Searching&batchId=154
int leftIndex(int s, int a[], int e){

    int l = 0;
    int r = s -1;
    int i = -1;
    while(l<=r)
    {
        int m = (r -l)/ 2 + l;
        if(a[m] == e)
        {
            i = m;
            break;
        }
        if(a[m] < e)
            l = m + 1;
        else
            r = m -1;
    }
    if(i == -1)
        return -1;
    while(a[i] == e)
        i--;
    return i+1;
}
