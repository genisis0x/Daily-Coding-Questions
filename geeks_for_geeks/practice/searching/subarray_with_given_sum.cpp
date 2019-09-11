// PASSED
// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/1/?track=SPCF-Searching&batchId=154 
void subarraySum(int a[], int n, int s){

    int j =0;
    int i =0;
    int local_sum = 0;
    for(i=0; i<n; i++)
    {
        local_sum += a[i];
        while(local_sum > s)
        {
            local_sum -=a[j];
            j++;
        }
        if(local_sum == s)
        {
            cout<<j+1<<" "<<i+1;
            break;
        }
    }
    if(i == n)
        cout<<-1;
}
