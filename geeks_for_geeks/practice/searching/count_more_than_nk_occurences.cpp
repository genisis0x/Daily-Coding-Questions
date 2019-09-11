// PASSED
// https://practice.geeksforgeeks.org/problems/count-element-occurences/1/?track=SPCF-Searching&batchId=154
int countOccurence(int a[], int n, int k)
{
    map <int , int> hm;
    for(int i=0; i<n; i++)
        hm[a[i]] +=1;
    int c = 0;
    for(int i=0; i<n; i++)
    {
        if(hm[a[i]] > (n /k))
        {
            c++;
            hm.erase(a[i]);
        }
    }
    return c;
}
