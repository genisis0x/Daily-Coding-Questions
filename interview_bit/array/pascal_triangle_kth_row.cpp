// https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/
vector<int> Solution::getRow(int A) {
    vector<int> res(A+1);
    res[0]=1;
    for(int i=1; i<=A; i++) {
        res[i] = res[i-1]*(A-i+1)/i;
    }
    return res;
}

