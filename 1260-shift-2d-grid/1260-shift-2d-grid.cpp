class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int total = m * n;
        
        k = k % total;
        
        vector<vector<int>> ans(m, vector<int>(n));
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int odd = i * n + j;
                
                int idx = (odd + k) % total;
                
                int new_r = idx / n;
                int new_c = idx % n;
            
                ans[new_r][new_c] = grid[i][j];
            }
        }
        
        return ans;
    }
};