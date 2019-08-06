// PASSED
// https://app.codility.com/programmers/lessons/2-arrays/cyclic_rotation/

vector<int> solution(vector<int> &A, int k) 
{
    int n = A.size();
    if(n == 0)
        return A;
    k %= n;
    if(k == 0)
        return A;
    vector <int> temp(k);
    int j = 0;
    for(int i = n-k; i < n; i++)
    {
        temp[j] = A[i];
        j++;
    }
    for(int i = n-1; i >=k; i--)
    {
        A[i] = A[i - k];
    }
    for(int i = 0; i<k; i++)
        A[i] = temp[i];
    return A;
}
