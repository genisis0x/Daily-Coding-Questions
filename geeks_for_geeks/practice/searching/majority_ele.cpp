// PASSED
// https://practice.geeksforgeeks.org/problems/majority-element/1/?track=SPCF-Searching&batchId=154
int majorityElement(int a[], int size)
{
    map <int , int> hm;
    for(int i=0; i<size; i++){
        hm[a[i]] += 1;
    }
    for(int i=0; i<size; i++){
        if(hm[a[i]] > size / 2)
	            return a[i];
    }
    return -1;
    // your code here

}
