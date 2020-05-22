// https://www.interviewbit.com/problems/merge-overlapping-intervals/

 bool cmp(Interval a, Interval b) {
     return (a.start < b.start);
 }

vector<Interval> Solution::merge(vector<Interval> &A) {
    sort(A.begin(), A.end(), cmp);
    int n = A.size();
    vector<Interval> res;
    res.push_back(A[0]);
    for(int i=1; i<n; ++i) {
        if(res.back().end < A[i].start) {
            res.push_back(A[i]);
        }
        else {
            res.back().end = max(res.back().end, A[i].end);
        }
    }
    return res;
}

