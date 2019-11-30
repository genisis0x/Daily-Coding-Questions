
// Prime Sieve method 
vector<int> Solution::primesum(int n) 
{
    vector<int> v(2);
    vector<bool> arr(n);
    for(int i=0; i<n; i++)
    {
        if(i==0||i==1 || (i&1)==0)
            arr[i] = false;
        else
            arr[i] = true;
    }
    arr[2] = true;
    for(int i=3; i*i<n; i+=2)
    {
        if(arr[i])
        {
            for(int j=i*i; j<n; j+=2*i)
                arr[j]=false;
        }
    }
    for(int i=2; i<n; i++)
    {
        if(arr[i] && arr[n-i])
        {
            v[0] = i;
            v[1] = n-i;
            return v;
        }
    }
}
