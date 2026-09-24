class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(n, 0);
        vector<int> suff(n, 0);
        pref[0] = nums[0];
        for (int i = 1; i < n; i++) {
            pref[i] = nums[i] + pref[i - 1];
        }
        suff[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suff[i] = nums[i] + suff[i + 1];
        }
        for (int i = 0; i < n; i++) {

            int left = (i == 0) ? 0 : pref[i - 1];

            int right = (i == n - 1) ? 0 : suff[i + 1];

            if (left == right) {
                return i;
            }
        }

        return -1;
    }
};