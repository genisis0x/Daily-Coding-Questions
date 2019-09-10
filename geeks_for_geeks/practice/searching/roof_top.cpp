//PASSED
// https://practice.geeksforgeeks.org/problems/roof-top/1/?track=SPCF-Searching&batchId=154 
int maxStep(int a[], int n)
{
    int c = 0;
    int m = 0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1] > a[i])
            c++;
        else
        {
            m = max(m, c);
            c = 0;
        }
    }
    return max(m, c);
}
