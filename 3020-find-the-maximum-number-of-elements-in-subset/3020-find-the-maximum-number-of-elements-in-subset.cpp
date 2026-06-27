class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> count;
        for (int num : nums) {
            count[num]++;
        }
        int max_len = 0;
        if (count.count(1)) {
            int ones = count[1];
            max_len = (ones % 2 != 0) ? ones : ones - 1;
        }

        for (auto& [x, freq] : count) {
            if (x == 1) continue;

            int current_len = 0;
            long long curr = x;
            while (count.count(curr) && count[curr] >= 2) {
                current_len += 2;
                if (curr > 100000) { 
                    curr = 1000000005; 
                    break;
                }
                curr = curr * curr;
            }
            if (count.count(curr) && count[curr] >= 1) {
                current_len += 1;
            } else {
                current_len -= 1;
            }

            max_len = max(max_len, current_len);
        }

        return max_len;
    }
};
