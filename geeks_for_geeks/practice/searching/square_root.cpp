// PASSED
// https://practice.geeksforgeeks.org/problems/square-root/1/?track=SPCF-Searching&batchId=154
long long int floorSqrt(long long int x)
{
    long long i;
    for(i =0; i * i <= x; i++)
        ;
    return i - 1;
}
