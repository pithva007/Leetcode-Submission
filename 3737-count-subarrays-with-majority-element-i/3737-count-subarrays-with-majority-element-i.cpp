class Solution {
public:
    vector<int> bit;

    void update(int idx, int val) {
        for (; idx < bit.size(); idx += idx & (-idx)) {
            bit[idx] += val;
        }
    }

    int query(int idx) {
        int sum = 0;
        for (; idx > 0; idx -= idx & (-idx)) {
            sum += bit[idx];
        }
        return sum;
    }
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int offset = n + 1;
        bit.assign(2 * n + 3, 0);
        int ans = 0;
        int current_sum = 0;
        update(0 + offset, 1);
        for (int num : nums) {
            if (num == target) {
                current_sum += 1;
            } else {
                current_sum -= 1;
            }
            ans += query(current_sum - 1 + offset);
            update(current_sum + offset, 1);
        }
        
        return ans;
    }
};