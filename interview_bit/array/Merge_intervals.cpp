// https://www.interviewbit.com/problems/merge-intervals/ 

bool cmp(Interval a, Interval b) {
     return a.start < b.start;
 }
 

vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    intervals.push_back(newInterval);
    sort(intervals.begin(),intervals.end(), cmp);
    vector<Interval> res;
    res.push_back(intervals[0]);
    for(int i=1;i<intervals.size();i++)
    {
        if(res.back().end < intervals[i].start)
            res.push_back(intervals[i]);
        else
            res.back().end = max(res.back().end, intervals[i].end);
    }
    return res;
}
