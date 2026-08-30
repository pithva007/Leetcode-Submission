class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        int mnIdx = 0, mxIdx = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == mn)
                mnIdx = i;

            if (nums[i] == mx)
                mxIdx = i;
        }

        int left = min(mnIdx, mxIdx);
        int right = max(mnIdx, mxIdx);

        int n = nums.size();

        int front = right + 1;

        int back = n - left;

        int both = (left + 1) + (n - right);

        return min({front, back, both});
    }
};