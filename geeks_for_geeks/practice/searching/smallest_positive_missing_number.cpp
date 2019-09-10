// PASSED
// https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number/1/?track=SPCF-Searching&batchId=154
int missingNumber(int a[], int n) {

    set <int > s;
    for(int i=0;i<n; i++)
    {
        if(a[i] > 0)
            s.insert(a[i]);
    }
    int c = 1;
    // for(auto i = s.begin(); i!= s.end(); i++)
    //     cout<<*i<<"\n";
    for(auto i = s.begin(); i!= s.end(); i++)
    {
        if(c == *i)
            c++;
        else
            break;
    }
    return c;
}
