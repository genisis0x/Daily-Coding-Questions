// https://www.interviewbit.com/problems/flip/

vector<int> Solution::flip(string A) {
    vector<int> res;
    int i =0, n=A.length();
    while(A[i]=='1')
        i++;
    if(i==n)
        return res;
    int c_sum = 0, max_sum  = 0, start=0, end = 0, temp=0;
    for(int i=0; i<n; i++) {
        if(A[i]=='0')
            c_sum++;
        else
            c_sum--;
        if(c_sum < 0) {
            temp = i+1;
            c_sum = 0;
        }
        if(max_sum < c_sum)
            start = temp, end = i, max_sum = c_sum;
    }
    res.push_back(++start); res.push_back(++end);
    return res;
}
