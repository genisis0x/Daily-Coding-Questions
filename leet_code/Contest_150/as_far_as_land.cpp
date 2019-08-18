//Passed
// https://leetcode.com/problems/as-far-from-land-as-possible/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(vector<vector<int>>& g, int i, int j, int dist, bool land = false)
    {
    if (!land) 
    {
        if (i < 0 || j < 0 || i >= g.size() || j >= g[i].size() || (g[i][j] != 0 && g[i][j] <= dist)) 
            return;
        g[i][j] = dist;
  }
  dfs(g, i - 1, j, dist + 1), dfs(g, i + 1, j, dist + 1), dfs(g, i, j - 1, dist + 1), dfs(g, i, j + 1, dist + 1);
}    
public:
    int maxDistance(vector<vector<int>>& grid) 
    {
        int n = grid[0].size();
        int max = -1;
        for(int r = 0; r < n; r++)
        {
            for(int c = 0; c < n; c++)
            {
                if(grid[r][c] == 1)
                    dfs(grid, r, c, 1, true);
            }
        }
        for(int r = 0; r < n; r++)
        {
            for(int c = 0; c < n; c++)
            {
                if(grid[r][c] > 1)
                    max = (max < grid[r][c]) ? grid[r][c] - 1 : max;
            }
        }
        return max;
    }
};