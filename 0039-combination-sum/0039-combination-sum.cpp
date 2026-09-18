class Solution {
public:
    void backtrack(const vector<int>& cd, int remaining, int start,vector<int>& current, vector<vector<int>>& results) {
        if (remaining == 0) {
            results.push_back(current);
            return;
        }

        for (int i = start; i < cd.size(); ++i) {
            if (cd[i] > remaining) {
                break;
            }

            current.push_back(cd[i]);
            backtrack(cd, remaining - cd[i], i, current, results);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& cd, int target) {
        vector<vector<int>> results;
        vector<int> current;

        sort(cd.begin(), cd.end());

        backtrack(cd, target, 0, current, results);
        return results;
    }
};
