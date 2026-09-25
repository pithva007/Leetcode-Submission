class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& a, int target, int i, vector<int>& temp) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        if (i == a.size() || target < 0)
            return;

        temp.push_back(a[i]);
        solve(a, target - a[i], i, temp);
        temp.pop_back();

        solve(a, target, i + 1, temp);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        solve(candidates, target, 0, temp);
        return ans;
    }
};