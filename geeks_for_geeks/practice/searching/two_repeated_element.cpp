// PASSED
// https://practice.geeksforgeeks.org/problems/two-repeated-elements/1/?track=SPCF-Searching&amp;batchId=154 
void twoRepeated(int a[], int n){
    for(int i = 0; i<n+2; i++)
    {
        if(a[abs(a[i])] >= 0)
            a[abs(a[i])] *= -1;
        else
            cout<<abs(a[i])<<" ";
    }
}
