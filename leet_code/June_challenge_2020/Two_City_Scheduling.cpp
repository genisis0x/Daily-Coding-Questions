class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size();
        auto cmp = [&](vector<int> a, vector<int> b) {
            return (a[0]-a[1] < b[0]-b[1]);
        };
        sort(costs.begin(), costs.end(), cmp);
        int s = 0;
        for(int i=0; i<n; ++i) {
            if(i < n/2)
                s+=costs[i][0];
            else
                s += costs[i][1];
        }
        return s;
        
    }
};
